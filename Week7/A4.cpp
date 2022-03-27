#include <iostream>

using namespace std;

int search1 (int key, int* a, int low, int high)
{
    if (low > high) return -1;
    int mid = (low + high)/2;
    if (*(a+mid) == key) return mid;
    if (*(a+mid) > key)
        return search1 (key, a, low, mid-1);
    return search1 (key, a, mid+1, high);
}

int main()
{
    int a[] = {3, 6, 9, 12, 83, 96};
    int key = 83;
    int ans = search1(key, a, 0, 5);
    if (ans == -1)
    {
        cout << "Not found!" << endl;
    }
    else
    {
        cout << "Key is at " << ans+1 << endl;
    }
}

