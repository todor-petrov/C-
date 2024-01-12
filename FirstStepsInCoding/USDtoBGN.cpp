#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    const double EXCHAGE_RATE_USD_BGN = 1.79549;

    double dollars;

    cin >> dollars;
    double bgn = dollars * EXCHAGE_RATE_USD_BGN;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << bgn << endl;
}
