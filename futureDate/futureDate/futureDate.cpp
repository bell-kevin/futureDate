// futureDate.cpp : 
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Future Date by Kevin Bell\n\n";
	cout << "This program calculates a future date using Julian number\n";
	cout << "First enter the current date info:\n";
	int month=1, day=1, year=1900;
	//loop to validate year
	while (year >= 1900 && year <= 2999) {
		cout << "What is the current year? ";
		cin >> year;
		//loop to validate month
		while (month >= 1 && month <= 12) {
			cout << "What is the current month? ";
			cin >> month;
			//The day value ranges from 1 to 31 for some months, 1 to 30 for other months, and 1 to 28 for February
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				while (day >= 1 && day <= 31) {
					cout << "What is the current day? ";
					cin >> day;
					while (day < 1 || day > 31) {
						cout << "Invalid day. Please try again.\n";
						cout << "What is the current day? ";
						cin >> day;
					}
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				while (day >= 1 && day <= 30) {
					cout << "What is the current day? ";
					cin >> day;
					while (day < 1 || day > 30) {
						cout << "Invalid day. Please try again.\n";
						cout << "What is the current day? ";
						cin >> day;
						break;
					}
					break;
				}
			}
			else if (month == 2) {
				while (day >= 1 && day <= 28) {
					cout << "What is the current day? ";
					cin >> day;
					while (day < 1 || day > 28) {
						cout << "Invalid day. Please try again.\n";
						cout << "What is the current day? ";
						cin >> day;
					}
				}
			}
			while (month < 1 || month > 12) {
				cout << "Invalid month. Please try again.\n";
				cout << "What is the current month? ";
				cin >> month;
			}
			break;
		}
		while (year < 1900 || year > 2999) {
			cout << "Invalid year. Please try again.\n";
			cout << "What is the current year? ";
			cin >> year;
		}
		break;
	}

	//convert month to monthName
	string monthName;
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
	
	
		cout << "The starting date is " << monthName << " " << day << ", " << year << endl;
		cout << "How many days into the future? ";
		int daysIntoFuture;
		cin >> daysIntoFuture;
		while (daysIntoFuture < 0) {
			cout << "Invalid number of days. Please try again.\n";
			cout << "How many days into the future? ";
			cin >> daysIntoFuture;
		}
		// daysIntoFuture = 1; //for testing
		cout << "That future date is " << month+1 << " " << day + daysIntoFuture << ", " << year << endl;
		
		system("pause");
		return 0;
} //end main function