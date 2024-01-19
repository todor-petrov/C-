#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double celsiusDegrees;
    cin >> celsiusDegrees;
    double converterCelsiusToFarenheit = (celsiusDegrees * 1.8) + 32;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << converterCelsiusToFarenheit << endl;
}
