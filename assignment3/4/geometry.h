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

    void push_back(const Point &p);
    void insert(const int position, const Point &p);
    void remove(const int pos);
    const int getSize() const;
    void clear();

    Point *get(const int position);
    const Point *get(const int position) const;

    // 4.2.1 We need the const version so that we can 
    // return raed-only points for const PointArray objects

    // Allow flexibility of returning a modifiable point or non-modifiable Point
};