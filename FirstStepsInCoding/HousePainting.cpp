#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double const GREEN_PAINT_COST = 3.4;
    double const RED_PAINT_COST = 4.3;
    double const DOOR_AREA = 2.4;
    double const WINDOW_AREA = 2.25;

    double height, length, roofHeight;
    cin >> height >> length >> roofHeight;

    double roofArea = height * length * 2 + height * roofHeight;
    double wallsArea = height * height * 2 - DOOR_AREA +
                       (height * length - WINDOW_AREA) * 2;

    double paintForWalls = wallsArea / GREEN_PAINT_COST;
    double paintForRoof = roofArea / RED_PAINT_COST;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << paintForWalls << endl;
    cout << paintForRoof << endl;
}
