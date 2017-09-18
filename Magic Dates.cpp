/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael
Assignment: Programming #2
Date assigned: 10/6/16
Date due: 10/18/16
Date submitted:
Remark: This program determines whether the month times the day is equal to the year.If so, it displays a message saying the date is magic.
If not it displays that the date is not magic.
*/ 
#include <iostream> 
using namespace std;
int main()
{
	int month, day, year;	//Declare Variables

	cout << "Enter the month (in numeric form): " << endl;
	cin >> month;

	cout << "Enter the day: " << endl;
	cin >> day;

	cout << "Enter the year: " << endl;
	cin >> year;

	if (year >= 1900 && year <= 1999) //Change date from 4 number value to two number year format
	{
		year -= 1900;
		if (year >= 2000 && year <= 2099) //Change date from 4 number value to two number year format
		
			year -= 2000;
	}
	if (year == month*day)
	{
		cout << "This day is magic!" << endl;
		cout << month << "/" << day << "/" << year << endl;
	}
	else if (year != month*day)
	{
		cout << "This day is not magic." << endl;
	}
		
	
	system("pause");
	return 0;


}