#include <iostream>

using namespace std;

void check(int a[])
{
    cout << sizeof(a);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    cout << sizeof(a) << endl;
    check(a);
}
