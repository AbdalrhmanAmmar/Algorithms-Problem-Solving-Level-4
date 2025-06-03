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

int main() {
    int year = ReadValue("Please enter a year: ");
    int month = ReadValue("Please enter a month (1-12): ");
    int day = ReadValue("Please enter a day (1-31): ");

    cout << "number of days is " << NumberOfDaysInMonth(year, month, day) << endl;
}
-------------------------------------------------------------------------------------------------------------
//another solution

#include <iostream>
using namespace std;
bool isLeapYear(short Year)
{
// if year is divisible by 4 AND not divisible by 100
// OR if year is divisible by 400
// then it is a leap year
return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 ==
0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
if (Month < 1 || Month>12)
return 0;
int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
days[Month - 1];
}
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month,
short Year)
{
short TotalDays = 0;
for (int i = 1; i <= Month - 1; i++)
{
TotalDays += NumberOfDaysInAMonth(i, Year);
}
TotalDays += Day;
return TotalDays;
}
short ReadDay()
{
short Day;
cout << "\nPlease enter a Day? ";
cin >> Day;
return Day;
}
ProgrammingAdvices.com
© Copyright 2022
Problem # 10/4 Solution Using C++
short ReadMonth()
{
short Month;
cout << "\nPlease enter a Month? ";
cin >> Month;
return Month;
}
short ReadYear()
{
short Year;
cout << "\nPlease enter a Year? ";
cin >> Year;
return Year;
}


int main()
{
short Day = ReadDay();
short Month = ReadMonth();
short Year = ReadYear();
cout << "\nNumber of Days from the begining of the year is "
<< NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);
system("pause>0");
return 0;
}