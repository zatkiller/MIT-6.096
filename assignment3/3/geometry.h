class Point {
    int x, y;

public:
    Point(int x=0, int y=0) { this->x = x; this->y = y; }
    int getX() const { return this->x; }
    int getY() const { return this->y; }
    void setX(const int x) { this->x = x; }
    void setY(const int y) { this->y = y; }
};