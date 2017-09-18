// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P1.1
// Date assigned: 1/19/17
// Date due: 2/7/17
// Date handed in: 2/7/17
// Remark: This is a program consisting of main and a function whose header is given as bool isMagic(int A[][10], int n). 
//The main function declares a 10 x 10 two - dimension array and partially initialized it with values Fig 1.b.
//The main function then calls the isMAgic function to determine whether the 4x4 array is magic and then display the result.

#include <iostream>
#include<iomanip>

using namespace std;
bool isMagic(int a[][10]);
//Precondition: A multidimentional array must have a size of 10 by 10 and be sent to the function with values
//Postcondition: The function checks the sum of the horizontal, vertical, and diagonal positions within the array and compares the values
//if all values equal eachother it returns a boolean value of true otherwise returning false 
int main()
{
	const int SIZE = 10; //Constant integer to declare the size of array
	bool result; //Variable stores result of isMagic boolean function
	int a[SIZE][SIZE] = {0};

	for (int column=0; column<4; column++) // For loop used to fill 2D array with values 
		for (int row = 0; row < 4; row++)
		{
			cout << "Input Column " << column + 1 << ", Row " << row + 1 << ": ";
			cin >> a[column][row];
		}
	
	result = isMagic(a); //calls the isMagic function and stores the result in the result variable 
	
	if (result == true) //if the result of the function is true output that it is magic
		cout << "This array is magic!\n\a";
	else if (result == false)
		cout << "This result is not magic.\n"; //if not the output of not magic comes out 

	system("pause");
	return 0;
}
bool isMagic(int a[][10]) // function header
{
	int total[4] = { 0 };	//array to store values of the various combinations that would make an array magic
	
	for (int row = 0; row < 4; row++) //Checks Horizontal
		total[0] += a[0][row];
	
	for (int column = 0; column < 4; column++) // Checks Vertical
		total[1] += a[column][0];
	
	for (int column = 0; column < 4; column++) // Checks one diagonal 
	{
		int row = 0;
		total[2] += a[column][row];
		row++;
	}
	
	for (int column = 0; column < 4; column++) // checks other diagonal 
	{
		int row = 3;
		total[3] += a[column][row];
		row--;
	}
	
	if (total[0] == total[1] && total[1] == total[2] && total[2] == total[3]) //if all of the totals are equal to eachother the function returns true value
		return true;
	else // if values are anything other than the true conditions function returns false 
		return false;
}
