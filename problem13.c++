// comare between two date
#include <iostream>
using namespace std;

struct Data {
    int day;
    int month;
    int year;
};

bool isLeapYear(short year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short NumberOfDaysInMonth(short year, short month) {
    if (month < 1 || month > 12)
        return 0;

    int montharr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return month == 2 ? (isLeapYear(year) ? 29 : 28) : montharr[month - 1];
}

int ReadDate(string msg) {
    cout << msg << ": ";
    int date;
    cin >> date;
    return date;
}

// Function to find the earlier of two dates
Data lesserday(Data d1, Data d2) {
    if (d1.year < d2.year) {
        return d1;
    } else if (d1.year > d2.year) {
        return d2;
    } else { // Same year
        if (d1.month < d2.month) {
            return d1;
        } else if (d1.month > d2.month) {
            return d2;
        } else { // Same month
            if (d1.day < d2.day)
                return d1;
            else
                return d2;
        }
    }
}

int main() {
    Data d1, d2;

    // Read first date
    d1.day = ReadDate("Please enter day1");
    d1.month = ReadDate("Please enter month1");
    d1.year = ReadDate("Please enter year1");

    // Read second date
    d2.day = ReadDate("Please enter day2");
    d2.month = ReadDate("Please enter month2");
    d2.year = ReadDate("Please enter year2");

    // Compare and print the lesser (earlier) date
    Data earlier = lesserday(d1, d2);
    cout << "The earlier date is: "
         << earlier.day << "/" << earlier.month << "/" << earlier.year << endl;

    return 0;
}

//another solution
#include <iostream>
using namespace std;
struct stDate
{
short Year;
short Month;
short Day;
};
bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}
short ReadDay()
{
short Day;
cout << "\nPlease enter a Day? ";
cin >> Day;
return Day;
}
short ReadMonth()
{
short Month;
cout << "Please enter a Month? ";
cin >> Month;
return Month;
}
short ReadYear()
{
short Year;
cout << "Please enter a Year? ";
cin >> Year;
return Year;
}

stDate ReadFullDate()
{
stDate Date;
Date.Day = ReadDay();
Date.Month = ReadMonth();
Date.Year = ReadYear();
return Date;
}
int main()
{
stDate Date1 = ReadFullDate();
stDate Date2 = ReadFullDate();
if (IsDate1BeforeDate2(Date1, Date2))
cout << "\nYes, Date1 is Less than Date2.";
else
cout << "\nNo, Date1 is NOT Less than Date2.";
system("pause>0");
return 0;
}