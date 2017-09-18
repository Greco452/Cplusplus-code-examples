// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P0.3
// Date assigned: 1/19/17
// Date due: 1/25/17
// Date handed in: 1/31/17
// Remark: The program that calls a function (named counting) five times. 
//The function uses a static integer variable to keep track of how many times it gets called. 

#include <iostream>
using namespace std;

void counting();
//Precondition: The funtion has to be called 
//Postcondition: Function adds 1 every time the funtion is called and stores the value in static integer c
static int c = 0;

int main()
{
	counting(); //function calls
	counting();
	counting();
	counting();
	counting();

	cout << "The function was called " << c << " times" <<  endl; // output the value of how many times function was called
	system("pause");
	return 0;
}
void counting()
{
	c += 1; //value of 1 is added to static global integer c each time function is called
}