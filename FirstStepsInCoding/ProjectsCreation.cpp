#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    const int NEEDED_HOURS_PER_PROJECT = 3;

    string name;
    int projects;

    cin >> name;
    cin >> projects;

    int hours = projects * NEEDED_HOURS_PER_PROJECT;

    cout << "The architect " << name << " will need " << hours << " hours to complete " << projects << " project/s." << endl;
}
