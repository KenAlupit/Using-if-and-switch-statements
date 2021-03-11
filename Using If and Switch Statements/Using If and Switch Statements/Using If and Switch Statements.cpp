#include <iostream>
using namespace std;

int main()
{
    int year;
    bool leapYear;
    cout << "Enter a year: ";
    cin >> year;
        if (year == 0) {
            cout << "Invalid input";
            leapYear = false;
        }
            else if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
                cout << year << " is a leap year";
                leapYear = true;
            }
                else {
                    cout << year << " is not a leap year";
                    leapYear = false;
                }
}