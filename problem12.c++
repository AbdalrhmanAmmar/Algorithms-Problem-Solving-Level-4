#include <iostream>;
using namespace std;






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


}

int dateafteradd(int day, int month, int year, int dayremind) {
	int dayremind += day;

	while (dayremind > (NumberOfDaysInMonth(year, month))) {
		dayremind -= (NumberOfDaysInMonth(year, month));
		month++;
			if (month > 12) {
				month = 1;
				year++;
		}
			cout << month;
			cout << year;
	}
	return dayremind;


	cout << dayremind << "/" << month << "/" << year << endl;



}





int main() {
	int day = Readnumber("please add day");
	int month = Readnumber("please add mnth");
	int year = Readnumber("please add year");
	int dayadded= Readnumber("please add day you wanna");


	cout<<dateafteradd(day, month, year, dayadded);
}