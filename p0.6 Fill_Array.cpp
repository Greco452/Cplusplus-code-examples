// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.6
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: This is a program consisting of main, display_array, and fill_array functions.
//The main function calls the fill_array function to fill the array then,
//The display_array function to display the contents of the array.

#include <iostream>
using namespace std;

void display_array(int a[]);//Function Prototype 
//Precondition: An initialized array must be declared to be displayed
//Postcondition: The contents of the array are displayed

int fill_array(int a[]);//Function Prototype
//Precondition: An integer must be entered followed by a char with the value 'Y' or 'N'
//Postcondition: The function repeats initializing array values until the array is filled or N is pressed
const int arraySize = 10;

int main()
{
	static int a[arraySize] = {0}; //initialize array with value of 0 
	fill_array(a);//function call
	display_array(a);//function call
	system("pause");
	return 0;
}
void display_array(int a[]) //Function Header
{
	for (int n = 0; n < arraySize; n++) //Loop to display values in each array spot 
	{
		cout << "Array value " << n + 1 << " is: " << a[n] << endl; //output array value n
	}
	cout << endl;
}
int fill_array(int a[]) // Function Header
{
	char answer;
	for (int n = 0; n < arraySize; n++)
	{
		cout << "Enter a value: ";
		cin >> a[n]; // enter value for array position n 

		if (n != 9)
		{
			cout << "Would you like to enter another integer? (Y for yes, N for no): "; //Ask user if another input is desired
			cin >> answer;
			answer = toupper(answer);
		}

		while (answer != 'Y' && answer != 'N')//input validation for answer
		{
			cout << "You have entered an invalid answer. Please answer Y or N: ";
			cin >> answer;
			answer = toupper(answer);
			cout << endl;
		}
		if (answer == 'Y') //if the answer is Y repeat function 
			continue;
		else if (answer == 'N')//if answer is N break out of the function 
			break;
	}
	return a[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]; //return array values 
}