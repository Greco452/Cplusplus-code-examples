// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P1.2
// Date assigned: 1/19/17
// Date due: 2/7/17
// Date handed in: 2/7/17
// Remark: This program is composed of the main function, a function named fill2Darray and a third function named computeSales. 
//The main function declares three arrays, calls the fill2DArray function to fill cells with values. 
//The main function then calls the computeSalses function to compute and then display values.

#include <iostream>
#include <iomanip>
using namespace std;

void fill2DArray(int a[][5], int numRows);
//Precondition:
//Postcondition:
void computeSales(int a[][5], int qtrlySum[], int numQtrs, int branchSum[], int numBranches);
//Precondition:
//Postcondition:

const int arraySize = 4; //arraysize for column position
const int arraySize2 = 5; // array size for row position
int sales[arraySize][arraySize2]; // multidimentional array for sales figures
int yearlyTotal; //variable used for final total of all 4 quarters

int main()
{
	int qtrlySum[arraySize2] = { 0 }; //quarterly sums array
	int branchSum[arraySize2] = { 0 };//array for the branches sum on a per quarter basis
	int numQtrs = 4, numBranches = 5; 

	fill2DArray(sales, numBranches);//functiion call to fill the array with values
	computeSales(sales, qtrlySum, numQtrs, branchSum, numBranches);//function call to compute the quarterly sum, the branch sum, and the yearly total

	system("pause");
	return 0;
}
void fill2DArray(int a[][5], int numRows)
{
	for (int column = 0; column< arraySize; column++) //for loop for columns
		for (int row = 0; row < arraySize2; row++) // inner for loop for row count
		{
			cout << "Input Column " << column + 1 << ", Row " << row + 1 << ": ";
			cin >> a[column][row]; // fill according to the values of the counters in both loops
		}
}
void computeSales(int a[][5], int qtrlySum[], int numQtrs, int branchSum[], int numBranches)
{

	for (int column = 0; column < numQtrs; column++)  
		for (int row = 0; row < numBranches; row++)
			branchSum[column] += a[column][row]; //calculates the horizontal total for all branches on a quarterly basis

	for (int branch = 0; branch < numBranches; branch++)
		for (int quarter = 0; quarter < numQtrs; quarter++)
			qtrlySum[branch] += a[quarter][branch]; // calculates the vertical totals of all quarters on a branch by branch basis

	for (int quarter = 0; quarter < numQtrs; quarter++)
		yearlyTotal += branchSum[quarter]; //takes the sums sent to the branchSum array and adds them up for the yearly total 

	int qCount = 1;
	cout << "\t   " << "Branch-1" << "     Branch-2" << "     Branch-3" << "     Branch-4" << "     Branch-5" << "      Total\n"; 
	//The following loops format and display output to match what was displayed on the homework 
		for (int column = 0; column < numQtrs; column++)
		{
			cout << "Quarter-" << qCount; //display quarter number
			qCount++;

			for (int row = 0; row < numBranches; row++)
			{
				cout << setw(9) << setfill(' ') << a[column][row] << "    ";// display sales values from multidimentional array 
				if (row == 4)
					cout << setw(8) << setfill(' ') << branchSum[column]; // displays the branch sums
			}
			cout << "\n--------------------------------------------------------------------------------------\n";
		}
	cout << "   Total:";
	for (int branch = 0; branch < numBranches; branch++)
	{
		cout << setw(9) << setfill(' ') << qtrlySum[branch] << "    "; //displays quarterly sums
		if (branch == 4)
			cout << setw(8) << setfill(' ') << yearlyTotal; //displays yearly total 
	}
	cout << endl;
}