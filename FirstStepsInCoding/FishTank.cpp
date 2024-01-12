#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int length, width, height;
    double percent;

    cin >> length >> width >> height >> percent;

    int volume = (length * width * height);
    double volumeInLiters = volume * 0.001;
    double neededWater = volumeInLiters * (1 - (percent * 0.01));

    cout << neededWater << endl;
}
