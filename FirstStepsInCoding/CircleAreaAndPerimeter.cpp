#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
    double radius;
    cin >> radius;

    double area = M_PI * radius * radius;
    double perimeter = 2 * M_PI * radius;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl << perimeter << endl;
}
