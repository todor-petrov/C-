#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double a, h;
    cin >> a >> h;
    double triangleArea = a * h / 2;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << triangleArea << endl;
}
