// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.9
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: This program consists of main, fill_array, display_array, and sort functions. 
//The sort function sorts the already filled int array in ascending order.

#include <iostream>
using namespace std;

void display_array(int a[]);//function prototype 
//Precondition: An initialized array must be declared to be displayed
//Postcondition: The contents of the array are displayed
void sort(int a[]);//function prototype 

//Precondition: An array must be declared and initialized with values
//Postcondition: The values of the array are sorted into acending order
const int arraySize = 10;

int main()
{
	int a[arraySize] = { 5, 6, 8, 7, 1, 3, 2, 4, 10, 9 }; //initialize array with values 10-1
	display_array(a); //function call to display array before sort 
	sort(a);// sort the array in acending order 
	display_array(a); // function call to display array after sort

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
void sort(int a[])
{
	int temp; // temporary storage variable 
	for (int b = 0; b < arraySize; b++)
	{
		for (int c = 0; c < arraySize ; c++)
		{
			if (a[c] > a[b]) // if array at position c from inner loop is greater than array at position b from outer loop 
			{
				//swap values
				temp = a[b]; 
				a[b] = a[c];
				a[c] = temp;
			}
		}
	}
}