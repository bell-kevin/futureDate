// futureDate.cpp : 
//

#include <iostream>
using namespace std;
//function prototypes
string convertMonthToMonthName(int month);
int convertMonthDayYearToJulianNumber(int month, int day, int year);
string convertJulianMonthToMonthName(int m3);
string monthName, monthName2;
int julianNumber;

int main()
{
    cout << "Future Date by Kevin Bell\n\n";
	cout << "This program calculates a future date using Julian number\n";
	cout << "First enter the current date info:\n";
	int month = 0, day = 0, year = 1899;
	while (year < 1900 || year > 2999) { // loop to validate year
		cout << "What is the current year? ";
		cin >> year;
	} // end while loop to validate year
	
	while (month < 1 || month > 12) { //loop to validate month
		cout << "What is the current month? ";
		cin >> month;
	} // end while loop to validate month
	
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		while (day < 1 || day > 31) {
			cout << "What is the current day? ";
			cin >> day;	
		} // end while loop to validate day
	} // end if statement for months with 31 days
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		while (day < 1 || day > 30) {
			cout << "What is the current day? ";
			cin >> day;
		} // end while loop to validate day
	} // end else if statement for months with 30 days
	else if (month == 2) {
		while (day < 1 && day > 28) {
			cout << "What is the current day? ";
			cin >> day;	
		} // end while loop to validate day
	} // end if statement to validate day
	
	//convert month to monthName
	convertMonthToMonthName(month);

	cout << "The starting date is " << monthName << " " << day << ", " << year << endl;
	cout << "How many days into the future? ";
	int daysIntoFuture;
	cin >> daysIntoFuture;
	while (daysIntoFuture < 0) {
		cout << "Invalid number of days. Please try again.\n";
		cout << "How many days into the future? ";
		cin >> daysIntoFuture;
	}

	//convert month, day, year to Julian number
	convertMonthDayYearToJulianNumber(month, day, year);

	//add days into future to Julian number
	julianNumber += daysIntoFuture;
	
	//convert julian number to month, day, year
	int j = julianNumber + 32044;
	int g = j / 146097;
	int dg = j - g * 146097;
	int c = (dg / 36524 + 1) * 3 / 4;

	int dc = dg - c * 36524;
	int b = dc / 1461;
	int db = dc - b * 1461;
	int a2 = (db / 365 + 1) * 3 / 4;

	int da = db - a2 * 365;
	int y2 = g * 400 + c * 100 + b * 4 + a2;
	int m2 = (da * 5 + 308) / 153 - 2;

	int d = da - (m2 + 4) * 153 / 5 + 122;
	int y3 = y2 - 4800 + (m2 + 2) / 12;
	int m3 = (m2 + 2) % 12 + 1;
	int d2 = d + 1;
	
	//convert julian month to monthName
	convertJulianMonthToMonthName(m3);

	cout << "That future date is " << monthName2 << " " << d2 << ", " << y3 << endl;
	
	system("pause");
	return 0;
} //end main function

//functions
string convertMonthToMonthName(int month) {
	if (month == 1)
		monthName = "January";
	else if (month == 2)
		monthName = "February";
	else if (month == 3)
		monthName = "March";
	else if (month == 4)
		monthName = "April";
	else if (month == 5)
		monthName = "May";
	else if (month == 6)
		monthName = "June";
	else if (month == 7)
		monthName = "July";
	else if (month == 8)
		monthName = "August";
	else if (month == 9)
		monthName = "September";
	else if (month == 10)
		monthName = "October";
	else if (month == 11)
		monthName = "November";
	else if (month == 12)
		monthName = "December";
	return monthName;
} //end convertMonthToMonthName function

int convertMonthDayYearToJulianNumber(int month, int day, int year) {
	int a = (14 - month) / 12;
	int y = year + 4800 - a;
	int m = month + 12 * a - 3;
	julianNumber = day + (153 * m + 2) / 5 + 365 * y + y / 4 - y / 100 + y / 400 - 32045;
	return julianNumber;
} //end convertMonthDayYearToJulianNumber function

string convertJulianMonthToMonthName(int m3) {
	if (m3 == 1)
		monthName2 = "January";
	else if (m3 == 2)
		monthName2 = "February";
	else if (m3 == 3)
		monthName2 = "March";
	else if (m3 == 4)
		monthName2 = "April";
	else if (m3 == 5)
		monthName2 = "May";
	else if (m3 == 6)
		monthName2 = "June";
	else if (m3 == 7)
		monthName2 = "July";
	else if (m3 == 8)
		monthName2 = "August";
	else if (m3 == 9)
		monthName2 = "September";
	else if (m3 == 10)
		monthName2 = "October";
	else if (m3 == 11)
		monthName2 = "November";
	else if (m3 == 12)
		monthName2 = "December";
	return monthName2;
}
