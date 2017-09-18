/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael/Thomas, Scott
Assignment: Programming #2
Date assigned: 10/20/16
Date due: 11/1/16
Date submitted:
Remark: This program that uses loops to display the following patterns of ‘*’s. The number of rows for each pattern is
determined by the user at runtime, i.e., the user is prompted to enter that number when program starts running.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int stars=1, pNum, endRow, startRow; //define variables

	cout << "Would you like to display pattern 1 or 2? "; //choose patern
	cin >> pNum;

	if (pNum < 1 || pNum > 2)		//input validation
	{
		cout << "Please enter a valid choice (1 or 2) ";
		cin >> pNum;
	}

	cout << "How many rows to display? ";		//enter rows to display
	cin >> endRow;

	if (pNum == 1)		//display rows for first pattern choice
		for (startRow = 1; startRow <= endRow; startRow++) //rows
		{
			for (stars = 1; stars <= startRow; stars++) //stars
				cout << "*";
			cout << endl;
		}

	if (pNum == 2)			//display rows for second pattern choice
		for (startRow = 1; startRow <= endRow; startRow++)//rows
		{
			for (stars = 1; stars <= endRow; stars++)//stars
			{
				cout << setw(endRow + 1 - stars);
				
				for (startRow = 3; startRow <= (2 * stars + 1); startRow++)
					cout << "*";
				cout << endl;
			}
		}
			
	
	
	system("pause");
	return 0;
		}
