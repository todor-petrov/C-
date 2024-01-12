#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int length, width, height;
    double percent;

    cin >> length;
    cin >> width;
    cin >> height;
    cin >> percent;

    double volume = length * width * height;
    double liters = volume / 1000;
    double busySpace = percent / 100;
    double neededWater = liters * (1 - busySpace);

    cout << neededWater << endl;
}
