#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int currentBookPages, pagesPerHour, days;
    cin >> currentBookPages;
    cin >> pagesPerHour;
    cin >> days;

    int hoursPerDay = (currentBookPages / pagesPerHour) / days;

    cout << hoursPerDay << endl;
}
