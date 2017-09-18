/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael
Assignment: Programming #2
Date assigned: 10/6/16
Date due: 10/18/16
Date submitted: 10/18/16
Remark: This program asks for the weight of the package and the distance it is to be shipped, and then displays the charges.
*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	double weight, distance, rate, charges;		//Define Variables

	cout << "What is the weight of the package you are shipping? (in kg)" << endl;	//Get value for weight 
	cin >> weight;

	if (weight == 0 || weight > 20)		//Input validation for weight 
	{
		cout << "You have entered a weight that is invalid. We only accept weights between 1kg and 20kg.\nPlease try again.\n";
		cin >> weight;
	}

	cout << "Enter the distance you want the package to travel: " << endl;			//Get value for distance
	cin >> distance;

	if (distance < 10 || distance > 3000)				//input validation for distance
	{
		cout << "You have entered an invalid distance. We only ship packages between 10 and 3000 miles away. Please try again.\n";
		cin >> distance;
	}
	distance /= 500;					//change distance for charges equation 
	
	if (weight <= 2)						//Determine rate based on weight 
		rate = 1.10;
	else if (weight > 2 && weight <= 6)
		rate = 2.20;
	else if (weight > 6 && weight <= 10)
		rate = 3.70;
	else if (weight > 10 && weight <= 20)
		rate = 4.80;
	

	charges = rate*distance;				//calculate charges

	cout << "Your charges are : $" << fixed << setprecision(2) << charges << endl;		//display final results
	
	cin.ignore(2);
	return 0;
}