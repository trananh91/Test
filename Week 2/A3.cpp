#include <iostream>

using namespace std;

void count_even(int* a, int n)
{
    for (int i = 0; i < n; i ++)
    {
        if ((*a+i)%2 == 0)
        {
            cout << (*a+i) << " ";
        }
    }
}

int main ()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    count_even(a, 6);
}
