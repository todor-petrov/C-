#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string OUTPUT = "Excellent!";
    const double EXCELLENT = 5.50;
    double grade;
    cin >> grade;
    if (EXCELLENT <= grade) {
        cout << OUTPUT << endl;
    }
}
