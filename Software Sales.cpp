/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael
Assignment: Programming #2
Date assigned: 10/6/16
Date due: 10/18/16
Date submitted: 10/18/16
Remark: This program calculates total discount on packages purchased based on volume and outputs the discounted total.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double quant, package, discount, total;				//Define the variables
	package = 99.0;

	cout << "How many units did you purchase? " << endl;		//Input amount of units purchased
	cin >> quant;
	
	total = quant*package;						//Calculate raw total	

	if (quant == 0)								//Validate input greater than 0
	{
		cout << "Enter a value greater than 0";
		cin >> quant;
	}
	
	if (quant >= 10 && quant <= 20)				//set paramters for discount calculation
		discount = .2;
	
	if (quant >= 20 && quant <= 49)
		discount = .3;

	if (quant >= 50 && quant <= 99)
		discount = .4;

	if (quant >= 100)
		discount = .5;
	
	if (quant < 10)
		discount = NULL;

	discount *= total;					//calculate total discount amount
	total -= discount;					//Take discount off of the raw total

	cout << "Total Cost of Purchase: $" << fixed << setprecision(2) << total << endl;	//Display total cost	

	system("pause");
	return 0;
	}