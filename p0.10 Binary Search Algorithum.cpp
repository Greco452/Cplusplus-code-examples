// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.10
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: a program consisting of main, fill_array, display_array, sort, and binary_search functions. 
// The program searches the filled array to determine if a key value exist in the array using the binary search algorithm. 

#include <iostream>
using namespace std;

void display_array(int a[]);
//Precondition: An initialized array must be declared to be displayed
//Postcondition: The contents of the array are displayed
int fill_array(int a[]);
//Precondition: An integer must be entered followed by a char with the value 'Y' or 'N'
//Postcondition: The function repeats initializing array values until the array is filled or N is pressed
void sort(int a[]);
//Precondition: An array must be declared and initialized with values
//Postcondition: The values of the array are sorted into acending order
bool binary_search(int a[], int size, int key);
//Precondition: An  integer array must be declared and sorted in acending order. The size of the array, and the search key must be initialized.
//Postcondition: The value of the funtion is true if the key is found in the array and false if not found

const int arraySize = 10;

int main()
{
	static int a[arraySize] = { 0 }; //initialize array with value of 0
	fill_array(a);// function call to fill array 
	display_array(a); // function call to display the array before sort 
	sort(a); // sort the array in acending order

	cout << "Enter key to search: "; // prompt to enter search key 
	int key;
	cin >> key; //input key 
	
	int result = binary_search(a, arraySize, key); // result is equal to the output of binary search function 
	if (result == 1) //if binary search returns true 
		cout << "Key has been found in the array!\n";
	else // if the binary search returns false
		cout << -1 << endl;

	system("pause");
	return 0;
}
void display_array(int a[])
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
void sort(int a[]) //bubble sort function header
{
	int temp; // temporary storage variable 
	for (int b = 0; b < arraySize; b++)
	{
		for (int c = 0; c < arraySize; c++)
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
bool binary_search(int a[], int size, int key)
{
	int start = 0; // starting value 
	int end = arraySize - 1; //ending value 
	int mid = (start + end) / 2; //equation to find the middle position

	while (start <= end&&a[mid] != key) //while the starting point is less than or equal to ending point 
		//and the median position is not equal to key repeat 
	{
		if (a[mid] < key) // if the middle position less than the key add 1 to the middle position and reassign as start
			start = mid + 1;
		else //if not take 1 away from ending position 
			end = mid - 1;
		mid = (start + end) / 2; //reassign middle position for repeat
	}

	if (a[mid] == key)
		return true; //Return true to main
	else
		return false;//Return false to main

	cout << "\n";
}