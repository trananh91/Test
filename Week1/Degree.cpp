#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Fahrenheit" << setw(17) << "Celcius" << setw(24) << "Absolute Value\n";
    int Min, Max, Step_size;
    cin >> Min >> Max >> Step_size;
    for (int i = Min; i <= Max; i += Step_size)
    {
        int F = i;
        float C = ((float)F-32)*5/9;
        float K = C + 273.15;
        cout << F << setw(24) << fixed << setprecision(2) << C  << setw(24) << K << endl;
    }
}
