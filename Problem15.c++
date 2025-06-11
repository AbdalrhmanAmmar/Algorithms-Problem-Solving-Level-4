// last day in year and last month
#include <iostream>
using namespace std;

struct stDate {
    short Day;
    short Month;
    short Year;
};

// دالة للتحقق من السنة الكبيسة
bool isLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

// دالة تعيد عدد الأيام في شهر معين
short NumberOfDaysInAMonth(short Month, short Year) {
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

// دالة للتحقق إذا كان اليوم هو آخر يوم في الشهر
bool IsLastDayInMonth(stDate Date) {
    return Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year);
}

// دالة للتحقق إذا كان الشهر هو آخر شهر في السنة
bool IsLastMonthInYear(short Month) {
    return Month == 12;
}

// دالة للتحقق إذا كان اليوم هو آخر يوم في السنة
bool IsLastDayInYear(stDate Date) {
    return IsLastDayInMonth(Date) && IsLastMonthInYear(Date.Month);
}

// دوال قراءة التاريخ
short ReadDay() {
    short Day;
    cout << "Please enter a Day: ";
    cin >> Day;
    return Day;
}

short ReadMonth() {
    short Month;
    cout << "Please enter a Month: ";
    cin >> Month;
    return Month;
}

short ReadYear() {
    short Year;
    cout << "Please enter a Year: ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate() {
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

// البرنامج الرئيسي
int main() {
    stDate Date1 = ReadFullDate();

    if (IsLastDayInMonth(Date1))
        cout << "\nYes, it's the last day in the month.";
    else
        cout << "\nNo, it's not the last day in the month.";

    if (IsLastDayInYear(Date1))
        cout << "\nYes, it's the last day in the year.";
    else
        cout << "\nNo, it's not the last day in the year.";

    system("pause>0");
    return 0;
}

//another solution

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

bool isLastDay(stDate Date1) {
	return Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month) && Date1.Month == 12;
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

	if (isLastDay(Data1)) {
		cout << "yes this is the last day and month";
	}
	else {
		cout << "not last day and month";
	}




}
