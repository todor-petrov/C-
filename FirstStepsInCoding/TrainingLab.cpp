#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double const DESK_WIDTH = 70;
    double const DESK_LENGTH = 120;
    int const TABLE_AND_DOOR = 3;
    int const AISLE = 100;

    double width, length;

    cin >> length >> width;

    length *= 100;
    width *= 100;
    width -= AISLE;
    int desksInRow = width / DESK_WIDTH;
    int rows = length / DESK_LENGTH;
    int seats = desksInRow * rows - 3;

    cout << seats << endl;
}
