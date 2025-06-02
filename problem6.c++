//the same code in last problem6but make functions just two lines

#include <iostream>
using namespace std;

bool isLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Year, short month) {
    if (month < 1 || month > 12)
        return 0;

    int montharr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return month == 2 ? isLeapYear(Year) ? 29 : 28 : montharr[month - 1];


}

int NumberOfHoursInMonth(short Year, short month) {
    return NumberOfDaysInMonth(Year, month) * 24;
}

int NumberOfMinutesInMonth(short Year, short month) {
    return NumberOfHoursInMonth(Year, month) * 60;
}

int NumberOfSecondsInMonth(short Year, short month) {
    return NumberOfMinutesInMonth(Year, month) * 60;
}

short ReadValue(string msg) {
    short value;
    cout << msg;
    cin >> value;
    return value;
}

int main() {
    short Year = ReadValue("Please enter a year: ");
    short month = ReadValue("Please enter a month (1-12): ");

    short days = NumberOfDaysInMonth(Year, month);
    int hours = NumberOfHoursInMonth(Year, month);
    int minutes = NumberOfMinutesInMonth(Year, month);
    int seconds = NumberOfSecondsInMonth(Year, month);

    cout << "\nNumber of Days in month [" << month << "] of year [" << Year << "] is: " << days;
    cout << "\nNumber of Hours: " << hours;
    cout << "\nNumber of Minutes: " << minutes;
    cout << "\nNumber of Seconds: " << seconds << endl;

    system("pause>0");
    return 0;
}
