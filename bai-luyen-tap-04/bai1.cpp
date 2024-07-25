#include<iostream>
#include<math.h>
using namespace std;
struct Point
{
    double x, y;
    Point();
    Point(double, double);
    Point(const Point&);
};

class Triangle
{
    Point p1, p2, p3;
public:
    Triangle(const Point&, const Point&, const Point&);
    double getPerimeter() const;
    double getArea() const;
};



Point::Point() {
    x=0, y=0;
}
Point::Point(double _x, double _y) {
    x = _x, y = _y;
}

Point::Point(const Point& p) {
    x = p.x, y = p.y;
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c) {
    p1 = a, p2 = b, p3 = c;
}


double Triangle::getPerimeter() const
{
    double a = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y,2));
    double b = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y,2));
    double c = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y,2));
    return a + b + c;
}

double Triangle::getArea() const
{
    return abs(p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2.0;
}

int main()
{
    Point A(1, 1), B(1, 4), C(5, 1);
    Triangle tri(A, B, C);
    cout << tri.getPerimeter() << endl;
    return 0;
}