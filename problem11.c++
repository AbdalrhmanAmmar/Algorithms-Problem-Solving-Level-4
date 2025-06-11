//calculate the number of days in a year

using namespace std;
#include <iostream>;


short ReadValue(string msg) {
    cout << msg << endl;
    int number;
    cin >> number;
    return number;
}
bool isLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}



short NumberOfDaysInMonth(short Year, short month, short day) {
    if (month < 1 || month > 12)
        return 0;

    int montharr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    month == 2 ? isLeapYear(Year) ? 29 : 28 : montharr[month - 1];

    int sumday = 0;

    for (int i = 0; i <= month - 2; i++) {
        sumday += montharr[i];
    }
    return sumday + day;

}

void ReturnDayToDate(int dayOfYear, int year) {
    int montharr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (isLeapYear(year)) {
        montharr[1] = 29;
    }

    int month = 1;
    while (dayOfYear > montharr[month - 1]) {
        dayOfYear -= montharr[month - 1];
        month++;
    }

    cout << "The date is: " << dayOfYear << "/" << month << "/" << year << endl;
}


int main() {
    int year = ReadValue("Please enter a year: ");
    int month = ReadValue("Please enter a month (1-12): ");
    int day = ReadValue("Please enter a day (1-31): ");

    cout << "number of days is " << NumberOfDaysInMonth(year, month, day) << endl;
    ReturnDayToData(NumberOfDaysInMonth(year, month, day), year);
}