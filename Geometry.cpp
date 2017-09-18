/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael
Assignment: Programming #2
Date assigned: 10/6/16
Date due: 10/18/16
Date submitted:10/18/16
Remark: This program gives the user 3 options of different equations. Each calculating the area of a different shape.
*/
#include<iostream>
#include<cmath>
using namespace std;


int main(){

	char choice;		//declare a variable for choice
	double radius, circleArea, length, width, base, height, rectangleArea, triangleArea;		//declare double values for the equations
	cout << "Choose one of the following:\n1.Area of a circle\n" <<							//menu prompt for choice input
		"2.Area of a rectangle\n3.Area of a triangle\n4.Quit\n";
	cin >> choice;
	const double pi = 3.14159;				//define constant variable for pi

	switch (choice)			//Switch funtion take choice input to relay the correct equation and prompts
	{
	case '1': cout << "What is the radius of the circle?\n";			//case one calculates the area of a circle
		cin >> radius;
		circleArea = pi*pow(radius, 2);
		cout << "The area of the circle is " << circleArea << endl;
		break;
	
	case '2': cout << "what are the length and width of the rectangle?\n";		//case two calculates the area of a rectangle
		cin >> length >> width;
		rectangleArea = length*width;
		cout << "The area of the rectangle is " << rectangleArea << endl;
		break;
	
	case '3': cout << "What is the base and height of the triangle?\n";		//case three calculates the area of a triangle
		cin >> base >> height;
		triangleArea = base*height*.5;
		cout << "The area of the triangle is " << triangleArea << endl;
		break;

	case'4': return 0;				//case 4 quits the program if selected
	break;

	default:cout << "Error that number is not one of the choices\n";				//input validation for choice selection
		break;
	}
	system("pause");
	return 0;
}
