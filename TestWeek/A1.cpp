#include <iostream>

using namespace std;

// Dia chi trong ham la nhu nhau
void check(float a[])
{
    cout << "Check: " << &a << " " << &a[0] << endl;
}

//Dia chi trong main la khac nhau
int main()
{
    float a[6];
    cout << "Main: " << &a << " " << &a[0] << endl;
    check(a);
}
