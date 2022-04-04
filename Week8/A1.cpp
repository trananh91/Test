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

void Print(Point point)
{
    cout << point.x << ' ' << point.y;
}

int main()
{
    Point a(2,0);
    Print(a);
}
