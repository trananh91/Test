#include <iostream>
#include <cmath>

using namespace std;

int main()
{
//    int hours;
//    cin >> hours;
//    int TN;
//    if (hours <= 100)
//    {
//        TN = hours*12000;
//    }
//    else if (hours <= 150 && hours > 100)
//    {
//        TN = 100*12000 + (hours-100)*16000;
//    }
//    else if (hours <= 200 && hours > 150)
//    {
//        TN = 100*12000 + 50*16000 + (hours-150)*20000;
//    }
//    else if (hours > 200)
//    {
//        TN = 100*12000 + 50*16000 + 50*20000 + (hours-200)*25000;
//    }
//    cout << TN << endl;
//    int BH = TN*9/100;
//    int TN_chiu_thue = TN - BH;
//    int thue;
//    if (TN_chiu_thue <= 1000000)
//    {
//        thue = 0;
//    }
//    else if (TN_chiu_thue <= 1500000 && TN_chiu_thue > 1000000)
//    {
//        thue = (TN_chiu_thue - 1000000)*10/100;
//    }
//    else if (TN_chiu_thue <= 2000000 && TN_chiu_thue > 1500000)
//    {
//        thue = 500000*10/100 + (TN_chiu_thue - 1500000)*15/100;
//    }
//    else if (TN_chiu_thue > 2000000)
//    {
//        thue  = 500000*10/100 + 500000*15/100 + (TN_chiu_thue - 2000000)*20/100;
//    }
//    cout << thue << " " << TN - BH - thue << endl;
    double khoan_vay;
    cin >> khoan_vay;
    long long sum = khoan_vay*(pow(1.02,12));
    cout << sum << endl;
}
