//calc days, hours, minutes, seconds from month 2;





#include <iostream>
using namespace std;
bool isLeapYear(short Year)
{
	// if year is divisible by 4 AND not divisible by 100
	// OR if year is divisible by 400
	// then it is a leap year
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInMonth2(short Year)
{
	return isLeapYear(Year) ? 29 : 28;
}
short NumberOfHoursInMonth2(short Year)
{
	return NumberOfDaysInMonth2(Year) * 24;
}
int NumberOfMinutesInMonth2(short Year)
{
	return NumberOfHoursInMonth2(Year) * 60;
}
int NumberOfSecondsInMonth2(short Year)
{
	return NumberOfMinutesInMonth2(Year) * 60;
}
short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year to check? ";
	cin >> Year;
	return Year;
}

int main()
{
	short Year = ReadYear();
	cout << "\nNumber of Days in Month 2 [" << Year << "] is "
		<< NumberOfDaysInMonth2(Year);
	cout << "\nNumber of Hours in Month 2 [" << Year << "] is "
		<< NumberOfHoursInMonth2(Year);
	cout << "\nNumber of Minutes in Month 2 [" << Year << "] is "
		<< NumberOfMinutesInMonth2(Year);
	cout << "\nNumber of Seconds in Month 2 [" << Year << "] is "
		<< NumberOfSecondsInMonth2(Year);
	system("pause>0");
	return 0;
}