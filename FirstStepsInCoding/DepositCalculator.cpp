#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double deposit;
    int months;
    double annualInterestRate;

    cin >> deposit >> months >> annualInterestRate;

    double amount = deposit + months * ((deposit * annualInterestRate / 100) / 12);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << amount << endl;
}
