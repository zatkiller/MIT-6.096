#include <iostream>
#include "geometry.h"

using namespace std;

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



int main () {
    Point arr[] = {Point(0, 0), Point(1, 2)};

    const PointArray pa(arr, 2);

    return 0;
}