#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double b1, b2, h;
    cin >> b1 >> b2 >> h;
    double trapezoidArea = (b1 + b2) * h / 2;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << trapezoidArea << endl;
}
