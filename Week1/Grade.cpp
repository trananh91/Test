#include <iostream>

using namespace std;

int main()
{
    int a;
    do
    {
        cout << "Nhap vao mot so trong khoang tu 0...9: ";
        cin >> a;
        string s;
        switch(a){
            case 0:
                s = "khong";
                break;
            case 1:
                s = "mot";
                break;
            case 2:
                s = "hai";
                break;
            case 3:
                s = "ba";
                break;
            case 4:
                s = "bon";
                break;
            case 5:
                s = "nam";
                break;
            case 6:
                s = "sau";
                break;
            case 7:
                s = "bay";
                break;
            case 8:
                s = "tam";
                break;
            case 9:
                s = "chin";
                break;
        }
        if (a >= 0 && a <= 9) cout << "Vua nhap chu so " << s << endl;
    }while (a >= 0 && a <= 9);
}
