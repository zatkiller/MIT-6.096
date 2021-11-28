class Point {
    int x, y;

public:
    Point(int x=0, int y=0) { this->x = x; this->y = y; }
    int getX() const { return this->x; }
    int getY() const { return this->y; }
    void setX(const int x) { this->x = x; }
    void setY(const int y) { this->y = y; }
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

class Polygon {
protected:
    static int numPolygons;
    PointArray points;

    Polygon(const PointArray &pa);
    Polygon(const Point points[], const int numPoints);  

    virtual double area() const = 0;
    static int getNumPolygons() { return numPolygons; }
    int getNumSides() const { return points.getSize(); }
    const PointArray *getPoints() const { return &points; }

};

class Rectangle : public Polygon {
public:
    Rectangle(const Point &a, const Point &b);
    Rectangle(const int a, const int b, const int tc, const int d);
    virtual double area() const;
};

class Triangle : public Polygon {
public:
    Triangle(const Point &a, const Point &b, const Point &c);
    virtual double area() const;
};