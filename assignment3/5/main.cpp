#include <iostream>
#include <math.h>
#include "geometry.h"

using namespace std;

Point constructorPoints [4];


Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,
    const Point &p3 , const Point &p4 = Point (0 ,0)) {
        constructorPoints [0] = p1;
        constructorPoints [1] = p2;
        constructorPoints [2] = p3;
        constructorPoints [3] = p4;
        return constructorPoints;
}

PointArray::PointArray() {
    this->points = new Point[0];
    this->size = 0;
}

PointArray::PointArray(const Point points[], const int size) {
    this->points = new Point[size];
    for (int i = 0;  i < size; i++) {
        this->points[i] = points[i];
    }
    this->size = size;
}

PointArray::PointArray(const PointArray &pa) {
    this->points = new Point[pa.size];
    for (int i = 0;  i < size; i++) {
        this->points[i] = pa.points[i];
    }
    this->size = pa.size;
}

PointArray::~PointArray() {
    delete[] this->points;
}

void PointArray::resize(int n) {
    Point *tmp = new Point[n];
    int minSize = (n > this->size) ? this->size : n;

    for (int i = 0;  i < size; i++) {
        tmp[i] = this->points[i];
    }
    delete[] this->points;
    this->size = n;
    this->points = tmp;
}

void PointArray::push_back(const Point &p) {
    resize(this->size+1);
    points[this->size - 1] = p;
}

void PointArray::insert(const int position, const Point &p) {
    resize(this->size+1);
    for (int i = this->size; i > position; i--) {
        this->points[i] = points[i-1];
    }
    this->points[position] = p;
}

void PointArray::remove(const int pos) {
    for (int i = pos; i < this->size - 2; i++) {
        this->points[i] = this->points[i+1];
    }
    resize(this->size - 1);
}

void PointArray::clear() {
    resize(0);
}

Point *PointArray::get(const int position) {
    return (position >= this->size) ? NULL : this->points + position;
}

const Point *PointArray::get(const int position) const {
    return (position >= this->size) ? NULL : this->points + position;
}

int Polygon::numPolygons = 0;

Polygon::Polygon(const PointArray &pa) : points(pa){
    numPolygons++;
}

Polygon::Polygon(const Point points[], const int numPoints):  points(points, numPoints){
    numPolygons++;
}

Rectangle::Rectangle(const Point &ll, const Point &ur): Polygon(updateConstructorPoints(ll, Point(ll.getX(), ur.getY()), ur, Point(ur.getX(), ll.getY())), 4) {}

Rectangle::Rectangle(const int llx, const int lly, const int urx, const int ury) : Polygon(updateConstructorPoints(Point(llx, lly), Point(llx, ury), Point(urx, ury), Point(urx, lly)), 4) {}

double Rectangle::area() const {
    int length = points.get(1)->getY() - points.get(0)->getY();
    int width = points.get(2)->getX() - points.get(1)->getX();
    return abs((double) length * width);
}

Triangle::Triangle( const Point &a, const Point &b, const Point &c) : Polygon ( updateConstructorPoints (a, b, c), 3) {}

double Triangle::area() const {
    int dx01 = points.get(0)->getX() - points.get(1)->getX(),
        dx12 = points.get(1)->getX() - points.get(2)->getX(),
        dx20 = points.get(2)->getX() - points.get(0)->getX();

    int dy01 = points.get(0)->getY() - points.get(1)->getY(),
        dy12 = points.get(1)->getY() - points.get(2)->getY(),
        dy20 = points.get(2)->getY() - points.get(0)->getY();

 double a = sqrt( dx01 * dx01 + dy01 * dy01 ),
        b = sqrt( dx12 * dx12 + dy12 * dy12 ),
        c = sqrt( dx20 * dx20 + dy20 * dy20 );

 double s = (a + b + c) / 2;

 return sqrt(s * (s-a) * (s-b) * (s-c));
 }

int main () {

    return 0;
}