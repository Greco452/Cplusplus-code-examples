/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael
Assignment: Programming #2
Date assigned: 10/6/16
Date due: 10/18/16
Date submitted:10/18/16
Remark: This program asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year.
The program then displays the number of days in that month taking leap years into consideration.
*/ 
#include <iostream> 
using namespace std;

int main()
{
	int month, year, days;			//define variables

	cout << "Enter a month (1-12): " << endl;		//get value for month
	cin >> month;

	if (month > 12)				//input validation for month 
	{
		cout << "You have entered an invalid number. Please enter a number between 1 and 12." << endl;
		cout << "Enter a month (1-12): " << endl;
		cin >> month;
	}
	
	cout << "Enter a year" << endl;		//get value for year
	cin >> year;
	cout << "\n";

	if (month == 4 || month == 6 || month == 9 || month == 11)			//give value of 30 for specific months
		days = 30;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)		//give value of 31 for specific months
		days = 31;
	else if (month == 2)		//calculate leap year days based on following equation 
	{
		bool leapyear = (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0);
		if (leapyear == 0)
			days = 28;
		else
			days = 29;

	}
	cout << "Days in this month: " << days << endl;				//output the days in the specific month specified


	system("pause");
	return 0;
}