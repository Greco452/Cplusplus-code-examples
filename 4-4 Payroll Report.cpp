/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael
Assignment: Programming #2
Date assigned: 10/20/16
Date due: 11/1/16
Date submitted:
Remark: This program displays a weekly payroll report. A loop in the program asks the user for the
employee number (an integer), gross pay, state tax, federal tax, and FICA withholdings. The loop will terminate
when 0 is entered for the employee number. After the data is entered, the program displays totals for
gross pay, state tax, federal tax, FICA withholdings, and net pay of all employees.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int empNum=1;		//initialize empNum Variable
	double grossPay, stateTax, federalTax, fica, subTotal=0, total=0,	//define variables
		federalTotal=0, stateTotal=0, ficaTotal=0, grossPayTotal=0;
	
	while (empNum != 0)
	{
		cout << "Enter the following information:" << endl;		//get employee number 
		cout << "Employee Number (0 to quit): ";
		cin >> empNum;
		if (empNum == 0)		//Sentinal 
			break;
		
		cout << "Gross pay: ";		
		cin >> grossPay;		//input gross pay
		grossPayTotal += grossPay;		//Add to running total

		cout << "Federal Withholding: ";
		cin >> federalTax;			//input federal tax
		federalTotal += federalTax;		//Add to running total

		cout << "State Withholding: ";
		cin >> stateTax;		//input state tax
		stateTotal += stateTax;		//Add to running total

		cout << "FICA Withholding: ";
		cin >> fica;		//input fica
		ficaTotal += fica;		//Add to running total
		
		subTotal = grossPay - stateTax - federalTax - fica;		//Calculate subtotal
		total += subTotal;	//Add to running total
		cout << endl;
	} 


	cout << "Total Gross Pay: " << setw(10) << fixed << setprecision(2) << "$" << grossPayTotal << endl;		//display results
	cout << "Total Federal Tax: " << setw(8) << fixed << setprecision(2) << "$" << federalTotal << endl;
	cout << "Total State Tax: " << setw(10) << fixed << setprecision(2) << "$" << stateTotal << endl;
	cout << "Total FICA: " << setw(15) << fixed << setprecision(2) << "$" << ficaTotal << endl;
	cout << "Total Net Pay: " << setw(12) << fixed << setprecision(2) << "$" << total << endl;
	
	system("pause");
	return 0;
}