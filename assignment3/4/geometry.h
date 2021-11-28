class Point {
    int x, y;

public:
    Point(int x = 0, int y = 0) { this->x = x;this->y = y; }
};

class PointArray {
    Point * points;
    int size;

    void resize(int n);

public:
    PointArray();
    PointArray(const Point points[], const int size);
    PointArray(const PointArray &pa);
    ~PointArray();

};