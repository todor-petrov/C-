#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string weather;
    string forecast = "It's cold outside!";

    cin >> weather;

    if (weather == "sunny") {
        forecast = "It's warm outside!";
    }

    cout << forecast << endl;
}
