#include <iostream>;
using namespace std;


int ReadYear(string msg) {
	cout << msg << endl;
	int number;
	cin >> number;
	return number;

}
bool isLeapYear(int number) {
	return (number % 400 == 0 || (number % 4 == 0 && number % 100 != 0));
}


int main() {
	int Year = ReadYear("Please enter year");

	bool Leap = isLeapYear(Year);
	if (Leap) {
		cout << "its a Leap yaer" << endl;
	}
	else {
		cout << "not a leap year";
	}


}