#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int count = 1;
    int a;
    float sum;
    do
    {
        cout << "Nhap diem mon hoc " << count << ": ";
        cin >> a;
        if (a > 10)
        {
            cout << "Nhap lai diem mon hoc " << count << "(trong khoang 0...10): ";
            cin >> a;
        }
        if (a >= 0 && a <= 10)
        {
            sum += a;
            count++;
        }
    }while (a >= 0);
    cout << "So mon hoc: " << count - 1 << endl;
    cout << "Diem trung binh cua " << count << " mon hoc: " << fixed << setprecision(2) << sum/(count - 1);
}
