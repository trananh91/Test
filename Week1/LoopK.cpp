#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    // do while
//    do
//    {
//        k /= 3;
//    }while(k >= 3);
//    cout << k;

    // while
    while (k >= 3)
    {
        k /= 3;
    }
    cout << k;
}
