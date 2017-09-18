/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael/Thomas, Scott
Assignment: Programming #4
Date assigned: 10/20/16
Date due: 11/1/16
Date submitted:
Remark:  This program shows bars in a bar graph by displaying a row of asterisks. Each asterisk represents
$100 of sales.
*/

#include <iostream> 
using namespace std;
int main()
{
	int s1, s2, s3, s4, s5, starNum, sales;		//define variables

	cout << "Enter today's sales for store 1: ";	//gets sales for stores
	cin >> s1;
	cout << "Enter today's sales for store 2: ";
	cin >> s2;
	cout << "Enter today's sales for store 3: ";
	cin >> s3;
	cout << "Enter today's sales for store 4: ";
	cin >> s4;
	cout << "Enter today's sales for store 5: ";	cin >> s5;		cout << "SALES BAR CHART\n(Each * = $100)\n";	sales = s1 / 100;			//displays 1 asterik per 100 dollers in sales	cout << "Store 1: ";	for (starNum = 0; starNum <= sales; starNum++)			cout << "*";
	cout << endl;

	sales = s2 / 100;		//displays 1 asterik per 100 dollers in sales	cout << "Store 2: ";	for (starNum = 0; starNum <= sales; starNum++)		cout << "*";
	cout << endl;

	sales = s3 / 100;		//displays 1 asterik per 100 dollers in sales	cout << "Store 3: ";	for (starNum = 0; starNum <= sales; starNum++)		cout << "*";
	cout << endl;

	sales = s4 / 100;		//displays 1 asterik per 100 dollers in sales	cout << "Store 4: ";	for (starNum = 0; starNum <= sales; starNum++)		cout << "*";
	cout << endl;

	sales = s5 / 100;		//displays 1 asterik per 100 dollers in sales	cout << "Store 5: ";	for (starNum = 0; starNum <= sales; starNum++)		cout << "*";
	cout << endl;

	system("pause");
	return 0;
}