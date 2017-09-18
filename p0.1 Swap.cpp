// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.1
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: The program declares and defines two integer variables in the main function. 
// The main function then calls a swap function that swaps the values stored in these two variables.

#include <iostream>
using namespace std;
int swap(int &a, int &b);
//Precondition: Two integers must be declared in x and y
//Postcondition: The values of x and y are swapped 
int main()
{
	int x = 10, y = 20;

	cout << "Value 1: " << x << endl;  //output values before swap function 
	cout << "Value 2: " << y << endl;

	swap(x, y); // function call

	cout << "Value 1: " << x << endl; //output values after swap 
	cout << "Value 2: " << y << endl;

	system("pause");
	return 0;
}
int swap(int &a, int &b) 
{
	int c; //Temporary Storage 
	c = a;
	a = b;
	b = c;

	return a, b; //return the swapped values 
}
