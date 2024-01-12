#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double TRAINERS_COEFFICIENT = 0.60;
    const double EQUIPMENT_COEFFICIENT = 0.80;
    const double BALL_COEFFICIENT = 0.25;
    const double ACCESSORIES_COEFFICIENT = 0.20;
    
    int annual_tax;
    cin >> annual_tax;

    double trainers = annual_tax * TRAINERS_COEFFICIENT;
    double equipment = trainers * EQUIPMENT_COEFFICIENT;
    double ball = equipment * BALL_COEFFICIENT;
    double accessories = ball * ACCESSORIES_COEFFICIENT;

    double expenses = annual_tax + trainers + equipment + ball + accessories;

    cout << expenses << endl;
}
