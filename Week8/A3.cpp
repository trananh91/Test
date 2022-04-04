#include <iostream>

using namespace std;

struct Point
{
    float x;
    float y;

    Point(float _x, float _y)
    {
        x = _x;
        y = _y;
    }
};

Point mid_point(const Point p1, const Point p2)
{
    Point midPoint(0,0);
    midPoint.x = (p1.x + p2.x)/2;
    midPoint.y = (p1.y + p2.y)/2;
    return midPoint;
}

int main()
{
    Point a(2,2);
    Point b(4,4);
    Point c = mid_point(a, b);
    cout << c.x << ' ' << c.y << endl;
}
