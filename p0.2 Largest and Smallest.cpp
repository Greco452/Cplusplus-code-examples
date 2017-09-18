// Course: CS2400 Computer Science 2
// Name: Greco, Michael
// Assignment: P0.2
// Date assigned: 1/19/17
// Date due: 1/31/17
// Date handed in: 1/31/17
// Remark: The program prompts the user to enter four different integers. 
// The program then calls a function named largest_and_Smallest which 
// returns the values of the largest and the smallest of the four integers. 

#include <iostream>
using namespace std;
void largest_and_Smallest(int a, int b, int c, int d); //function prototype 
//Precondition: Four integers must be entered 
//Postcondition: The values of the largest and the smallest of the four integers are displayed

int main()
{
	const int arraySize = 4; //declare constant for array size
	int a[arraySize] = { 0 }; //initialize array with values of 0

	for (int n = 0; n < arraySize; n++) //loop for array input
	{
		cout << "Enter a number: ";
		cin >> a[n];
	}
	
	largest_and_Smallest(a[0], a[1], a[2], a[3]); //function call

	system("pause");
	return 0;
}
void largest_and_Smallest(int a, int b, int c, int d) //function header
{
	int max=0, min=a;// maximum and minimum value initial values
	const int temp[4] = { a, b, c, d }; //temp storage array for inputted values

	for (int n = 0; n < 4; n++)
	{
		if (temp[n] > max) //if the value of position n is greater than max assign max to temp position n and repeat
			max = temp[n];

		if (temp[n] < min)// same as maximum adjusted for minimum value 
			min = temp[n];
	}
	cout << "The minimum is " << min << endl; // output minimum value
	cout << "The maximum is " << max << endl; // output maximum value 
}