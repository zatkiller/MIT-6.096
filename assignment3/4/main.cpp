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

int main () {
    Point arr[] = {Point(0, 0), Point(1, 2)};

    const PointArray pa(arr, 2);

    return 0;
}