#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double degrees;
    cin >> degrees;

    if (26.00 <= degrees && degrees <= 35.00) {
        cout << "Hot";
    }
    else if (20.1 <= degrees && degrees <= 25.9) {
        cout << "Warm";
    }
    else if (15.00 <= degrees && degrees <= 20.00) {
        cout << "Mild";
    }
    else if (12.00 <= degrees && degrees <= 14.9) {
        cout << "Cool";
    }
    else if (5.00 <= degrees && degrees <= 11.9) {
        cout << "Cold";
    }
    else {
        cout << "unknown";
    }
}
