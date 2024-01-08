#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double PRICE_PER_SQUARE_METER = 7.61;

    double area;
    cin >> area;

    double priceWithoutDiscount = area * PRICE_PER_SQUARE_METER;
    double discount = priceWithoutDiscount * 0.18;
    double finalPrice = priceWithoutDiscount - discount;

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;
}
