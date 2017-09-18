#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double totalPrice, cubicYards, squareFeet, cubicFeet, PricePerCubicYard;
	int depth;


	cout << "Input the number of square feet to be covered: \n";
	cin >> squareFeet;

	cout << "What is the depth of mulch to be spread around the area? \n";
	cin >> depth;

	PricePerCubicYard = 22.0;
	cubicFeet = squareFeet*(depth / 12);
	cubicYards = cubicFeet / 27;
	totalPrice = cubicYards*PricePerCubicYard;
	
	cout << "\nNumber of cubic yards needed: " << cubicYards << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Price Per Cubic Yard: $" << setw(7) << PricePerCubicYard << endl;
	cout << "The total price for your mulch is: $" << totalPrice << endl;

	cin.ignore(2);

	return 0;

}