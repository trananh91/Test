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

int  main()
{
    Point a(2,2);
    cout << &(a.x) << " " << &(a.y) << " " << &a << ' ' << sizeof(a);
}
