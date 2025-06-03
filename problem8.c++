//print month calender;

using namespace std;
#include <iostream>



short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m)
		/ 12)) % 7;
}
//
string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = {
	"Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}
//
bool isLeapYear(short Year) {
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Year, short month) {
	if (month < 1 || month > 12)
		return 0;

	int montharr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return month == 2 ? isLeapYear(Year) ? 29 : 28 : montharr[month - 1];


}//

void PrintMonthCalender(int month, int year) {
	string months[12] = {
	   "January", "February", "March", "April", "May", "June",
	   "July", "August", "September", "October", "November", "December"
	};

	cout << "--------------- " << months[month - 1] << " " << year << " -----------------------\n";
	cout << "Sun Mon Tue Wed Thu Fri Sat\n";

	int days = NumberOfDaysInMonth(year, month);
	int startdays = DayOfWeekOrder(1, month, year);

	for (int i = 0; i < startdays; i++) {
		cout << "    ";
	}

	for (int day = 1; day <= days; day++) {
		printf("%3d ", day);
		if ((startdays + day) % 7 == 0)
			cout << endl;
	}
	cout << endl;




}








int Readnumber(string msg) {
	cout << msg << endl;
	int number;
	cin >> number;
	return number;

}




int main() {
	int year = Readnumber("please enter year");
	int month = Readnumber("please enter month");

	PrintMonthCalender(month, year);


}