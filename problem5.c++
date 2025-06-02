//calc days, hours, minutes, seconds from month 2;





//calc days, hours, minutes, seconds from month 2;





#include <iostream>
using namespace std;

bool isLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Year, short month) {
    if (month < 1 || month > 12)
        return 0;

    if (month == 2)
        return isLeapYear(Year) ? 29 : 28;

    short arr31Days[7] = { 1, 3, 5, 7, 8, 10, 12 };
    for (short i = 0; i < 7; i++) {
        if (arr31Days[i] == month)
            return 31;
    }

    return 30;
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
