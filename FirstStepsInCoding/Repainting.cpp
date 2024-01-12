#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    const double NYLON_PRICE = 1.50;
    const double PAINT_PRICE = 14.50;
    const double THINNER_PRICE = 5.00;
    const double BAGS_PRICE = 0.40;
    const int ADDITIONAL_NYLON = 2;
    const double ADDITIONAL_PAINT_COEFFICIENT = 1.10;
    const double WORK_COEFFICIENT = 0.30;

    int nylon, paint, thinner, hours;

    cin >> nylon;
    cin >> paint;
    cin >> thinner;
    cin >> hours;

    double materialsExpenses = NYLON_PRICE * (nylon + ADDITIONAL_NYLON) +
                               PAINT_PRICE * (paint * ADDITIONAL_PAINT_COEFFICIENT) +
                               THINNER_PRICE * thinner + BAGS_PRICE;
    double workExpenses = materialsExpenses * WORK_COEFFICIENT * hours;
    double totalExpences = materialsExpenses + workExpenses;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalExpences << endl;
}
