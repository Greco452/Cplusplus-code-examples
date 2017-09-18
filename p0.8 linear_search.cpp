// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.8
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: This program consists of main, fill_array, display_array, and linear_search functions. 
//The main function calls fill_array to load the array then asks the user to enter a search key 
//The main function then calls the linear_search function with appropriate parameters passed to the function 
//to determine if the value of the key exist in the array. If so, the function returns the location of the array 
//element in the array whose value matches the value of the key; otherwise, the function returns -1, .

#include <iostream>
using namespace std;

void display_array(int a[]);//function prototype 
//Precondition: An initialized array must be declared to be displayed
//Postcondition: The contents of the array are displayed

int fill_array(int a[]);//function prototype 
//Precondition: An integer must be entered followed by a char with the value 'Y' or 'N'
//Postcondition: The function repeats initializing array values until the array is filled or N is pressed

void linear_search(int b, int a[]);//function protorype 
//Precondition: An integer search key must be entered to be searched. An array with values initialized must be declared.
//Postcondition: The function starts a linear search to locate if the key is inside the array or not. The location of
//the value is revealed if the key is found. Otherwise a -1 is displayed.

const int arraySize = 10;

int main()
{
	static int a[arraySize] = { 0 }; // initialize array with value of 0 
	int start = 0, end = 9; //declare starting and ending values 
	int key; //delcare variable for key 

	fill_array(a); //function call to fill array 
	
	cout << "Please enter a search key: ";
	cin >> key; //input search key 
	linear_search(key, a); //function call for linear search of array 

	system("pause");
	return 0;
}
void display_array(int a[]) //function header 
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
void linear_search(int b, int a[])
{
	int notEqual=-1; //assign value for not equal 
	for (int n = 0; n < arraySize; n++)
	{
		if (a[n] != b) //if the value in array position n is not equal to the key input from main function continue the loop 
			continue;

		if (a[n] == b)// if the key matches a value of array in position n 
		{
			cout << "The location of your search is array position " << n+1 << endl; //output the location 
			notEqual = 1; //assign not equal a value of 1 so the final if loop does not run 
		}
	}
	if (notEqual == -1) // if the value of not equal is not changed to one output -1 
		cout << notEqual << endl;
}