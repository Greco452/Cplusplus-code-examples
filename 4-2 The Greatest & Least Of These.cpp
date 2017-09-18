/*
Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael/Thomas, Scott
Assignment: Programming #4
Date assigned: 10/20/16
Date due: 11/1/16
Date submitted:
Remark: This program lets the user enter a series of integers. Letting the user enter ?99 to signal the
end of the series. After all the numbers have been entered, the program displays the largest and smallest
numbers entered.
*/

#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	int least = 9999, greatest = 0, x=0;

	cout << "You will enter a series of integers and I will then tell you the largest and the smallest numbers you entered.\n";
	cout << "Enter - 99 to terminate the series.\n\n";
	
	cout << "Enter an integer (If you want to stop enter -99):";	//Get initial input
	cin >> x;

	if (x > greatest)				//Determine if value is greatest and assign if true
		greatest = x;

	if (x < least)					//Determine if value is least and assign if true
		least = x;

	while (x != -99)			//Start Loop
	{
		cout << "Enter another integer (If you want to stop enter -99):";
			cin >> x;

			if (x == -99)
				break;

		if (x > greatest)				//Determine if value is greatest and assign if true
				greatest = x;

		if (x < least)					//Determine if value is least and assign if true
				least = x;
		
	} 


		cout << "The greatest number is: " << greatest << endl;		//Output Greatest
	cout << "The smallest number is: " << least << endl;		//Output Least

	system("pause");
	return 0;
}