// Data1 should less than Data2
#include <iostream>;
using namespace std;


struct stDate {
	int Day;
	int Month;
	int Year;
};



int Readnumber(string msg) {
	cout << msg << endl;
	int number;
	cin >> number;
	return number;

}

bool isLeapYear(short Year) {
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
};

short NumberOfDaysInMonth(short Year, short month) {
	if (month < 1 || month > 12)
		return 0;

	int montharr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return month == 2 ? isLeapYear(Year) ? 29 : 28 : montharr[month - 1];


};

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

stDate ReadFullDate()
{
	stDate Date;
	Date.Day = Readnumber("enter day");
	Date.Month = Readnumber("enter month");
	Date.Year = Readnumber("enter year");
	return Date;
}
int main() {

	stDate Data1 = ReadFullDate();
	stDate Data2 = ReadFullDate();

	if (IsDate1BeforeDate2(Data1, Data2)) {
		cout << "Date1 less than 2";
	}
	else {
		cout << "Date2 less than 1";
	}


}