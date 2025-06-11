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

bool IsLastDayInMonth(stDate Date1) {
	return Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month);
}
bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

stDate increaseDay(stDate Date) {
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}
	return Date;
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

	Data1 = increaseDay(Data1); // 🔧 هنا التعديل المهمstDate Data1 = ReadFullDate();

	cout << "Increase day add one day" << endl;
	cout << "Day" << Data1.Day << endl;
	cout << "Month" << Data1.Month << endl;
	cout << "Year" << Data1.Year << endl;





}