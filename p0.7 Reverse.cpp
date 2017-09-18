// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.7
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: This program consists of main, fill_array, display_array, and reverse functions. 
//The reverse function reverses the elements the list of integer values stored in the array after 
//the fill_array function is called and displays the contents of the array before and 
//after the reverse function is invoked.

#include <iostream>
using namespace std;

void display_array(int a[]);
//Precondition: An initialized array must be declared to be displayed
//Postcondition: The contents of the array are displayed
int fill_array(int a[]);
//Precondition: An integer must be entered followed by a char with the value 'Y' or 'N'
//Postcondition: The function repeats initializing array values until the array is filled or N is pressed
void reverse(int a[], int start, int end);
//Precondition: An array must be initialized with values from display array to be reversed. 
//A start and end integer variable have to be declared 
//Postcondition: The contents of the array are reversed in position.
const int arraySize = 10;

int main()
{
	static int a[arraySize] = { 0 }; //initialize array with value of 0
	int start=0, end=9; // declare start and end of the array values
	
	fill_array(a);//function call to fill the array 
	display_array(a);//function call to display array 
	reverse(a, start, end); //function call to reverse array positions 

	cout << "Reversed array" << endl; 
	display_array(a);//output the reversed array 
	
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
void reverse(int a[], int start, int end) //function header
{
	int temp; //temp storage variable 
	while (start < end) // while the starting value is less than the ending value repeat this loop 
	{
		temp = a[start]; //assign temp with the starting position of the array 
		a[start] = a[end]; //swap the outside values
		a[end] = temp;//swap outside values 
		start++; //add 1 to starting value
		end--; //subtract 1 from ending value 
	}
}
