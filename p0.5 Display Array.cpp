// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.5
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: This is a program consisting of main and display_array functions.
//The main function then calls the display_array function to display the contents of the array.

#include <iostream>
using namespace std;

void display_array(int a[]);//Function prototype 
//Precondition: An initialized array must be declared to be displayed
//Postcondition: The contents of the array are displayed
const int arraySize = 10;

int main()
{
	int a[arraySize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // initalize array with values 1-10
	display_array(a);//function call
	system("pause");
	return 0;
}
void display_array(int a[]) // function header
{
	for (int n = 0; n < arraySize; n++) //Loop to display values in each array spot 
	{
		cout << "Array value " << n + 1 << " is: " << a[n] << endl; //output array value n
	}
	cout << endl;
}