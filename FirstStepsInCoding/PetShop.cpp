#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double DOG_FOOD_PACKAGE = 2.50;
    const double CAT_FOOD_PACKAGE = 4.00;

    int dogFoodPackagesNumber;
    int catFoodPackagesNumber;

    cin >> dogFoodPackagesNumber;
    cin >> catFoodPackagesNumber;

    double totalPrice = DOG_FOOD_PACKAGE * dogFoodPackagesNumber + CAT_FOOD_PACKAGE * catFoodPackagesNumber;

    cout << totalPrice << " lv." << endl;
}
