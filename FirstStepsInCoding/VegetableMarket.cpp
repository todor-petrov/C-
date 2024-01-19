#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double const BGN_TO_EURO = 1.94;
    double vegetablePriceKg, fruitsPriceKg;
    int vegetableQuantityKg, fruitsQuantityKg;
    cin >> vegetablePriceKg >> fruitsPriceKg >> vegetableQuantityKg >> fruitsQuantityKg;
    double revenueEuro = (vegetablePriceKg * vegetableQuantityKg +
                          fruitsPriceKg * fruitsQuantityKg) /
                          BGN_TO_EURO;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << revenueEuro << endl;
}
