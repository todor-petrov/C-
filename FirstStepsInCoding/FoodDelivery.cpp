#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double CHICKEN_MENU = 10.35;
    const double FISH_MENU = 12.40;
    const double VEGETARIAN_MENU = 8.15;
    const double DELIVERY = 2.50;
    const double DESSERT_COEFFICIENT = 0.20;

    int chickenNumber, fishNumber, vegetarianNumber;

    cin >> chickenNumber >> fishNumber >> vegetarianNumber;

    double bill = chickenNumber * CHICKEN_MENU +
                  fishNumber * FISH_MENU +
                  vegetarianNumber * VEGETARIAN_MENU;
    double dessert = bill * DESSERT_COEFFICIENT;

    double totalBill = bill + dessert + DELIVERY;

    cout << totalBill << endl;
}
