#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double PENS_PACKAGE_PRICE = 5.80;
    const double MARKERS_PACKAGE_PRICE = 7.20;
    const double DETERGENT_LITER_PRICE = 1.20;
    
    int pensPackages, markersPackages, detergentLiters, percentDiscount;
    
    cin >> pensPackages;
    cin >> markersPackages;
    cin >> detergentLiters;
    cin >> percentDiscount;

    double billWithoutDiscount = (pensPackages * PENS_PACKAGE_PRICE +
                                  markersPackages * MARKERS_PACKAGE_PRICE +
                                  detergentLiters * DETERGENT_LITER_PRICE);
    double totalBill = billWithoutDiscount * (100 - percentDiscount) / 100;

    cout << totalBill << endl;
}
