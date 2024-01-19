#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double const MUSSELS_PRICE = 7.50;
    double const BONITO_MACKEREL_COEFFICIENT = 1.60;
    double const SAFRID_SPRINKLE_COEFFICIENT = 1.80;

    double mackerelPrice, sprinklePrice, bonitoQuantity, safridQuantity;
    int musselsQuantity;

    cin >> mackerelPrice >> sprinklePrice >> bonitoQuantity >> safridQuantity >> musselsQuantity;

    double bonitoPrice = mackerelPrice * BONITO_MACKEREL_COEFFICIENT;
    double safridPrice = sprinklePrice * SAFRID_SPRINKLE_COEFFICIENT;

    double bill = bonitoPrice * bonitoQuantity +
                  safridPrice * safridQuantity +
                  MUSSELS_PRICE * musselsQuantity;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bill << endl;
}
