#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> a;
    int diem;
    float he_so;
    float sum;
    float sum_hs;
    for (int i = 1; i <= a; i++)
    {
        cout << "Diem mon hoc " << i << ": ";
        cin >> diem;
        cout << "He so mon hoc " << i << ": ";
        cin >> he_so;
        while (diem < 0 || diem > 10)
        {
            cout << "Nhap lai diem mon hoc " << i << ":";
            cin >> diem;
        };
        while (((int)he_so != 1) && (he_so != 1.5) && ((int)he_so != 2) && (he_so != 2.5) && ((int)he_so != 3))
        {
            cout << "Nhap lai he so mon hoc " << i << ": ";
            cin >> he_so;
        }
        sum += diem*he_so;
        sum_hs += he_so;
    }
    cout << "So mon hoc: " << a << endl;
    cout << "Tong so he so: " << sum_hs << endl;
    cout << "Diem TB cua " << a << " mon hoc: " << fixed << setprecision(2) << sum/sum_hs;
}
