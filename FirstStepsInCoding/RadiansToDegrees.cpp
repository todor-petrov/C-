#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double PI = 3.14;

    double radians;
    cin >> radians;

    double degrees = radians * 180 / PI;

    cout << round(degrees) << endl;
}
