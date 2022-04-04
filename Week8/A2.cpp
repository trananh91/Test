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

void Print1(Point point)
{
    cout << (&point) << endl;
}

void Print2(Point &point)
{
    cout << (&point) << endl;
}

int main()
{
    Point a(2,2);
    cout << &a << endl;
    Print1(a);
    Print2(a);
}
