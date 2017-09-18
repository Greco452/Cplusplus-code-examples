/*
Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael/Thomas, Scott
Assignment: Programming #2
Date assigned: 10/20/16
Date due: 11/1/16
Date submitted:
Remark: This program calculates how much a person would earn over a period of time if his or her salary is one
penny the first day and two pennies the second day, and continues to double each day.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int daysEnd, days;	//define variables
	double salary, total;
	salary = .01;		
	days = 1;

	cout << "For how many days will the pay double? ";		
	cin >> daysEnd;		//Get input for how many days total the pay will double

	while (daysEnd <= 0)		//input validation
	{
		cout << "The number of days should be at least one \n";
		cout << "For how many days will the pay double? ";
		cin >> daysEnd;
	}
	
	cout << "Day" << setw(20) << "Total pay" << endl;		//display header
	cout << "---------------------------------------" << endl;
	
	while (days <= daysEnd)		//start loop doubling value every time
	{
		total = salary;
		salary *= 2;
		cout << days << setw(10) << setw(10) << "$" << fixed << setprecision(2) << total << endl;
		days++;		//counter
	}

	cout << "---------------------------------------" << endl;
	cout << "Total" << setw(6) << "$" << total << endl;		//output total

	system("pause");
	return 0;
}