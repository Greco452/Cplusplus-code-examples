/*Enter header for assignment here
*/
#include<iostream>
#include<cctype>

using namespace std;
bool isPrime(int& n);		//function prototype

int main()
{
	int num;
	char choice;
	do
	{
		cout << "Enter a number: ";
		cin >> num;

		isPrime(num); //function call

		if (num == true)		//if function is true 
			cout << "This is a prime number.\n";
		else if (num == false)		//if function is false
			cout << "This is not a prime number.\n";

		cout << "Would you like to test another number? (Y or N): ";		//repeat loop if neccisary 
		cin >> choice;
		choice= toupper(choice);

		while (choice != 'Y' && choice != 'N')		//input validation for loop repeat
		{
			cout << "You have entered an invalid choice. Please enter Y or N: ";
				cin >> choice;
				choice = toupper(choice);
		}

	} while (choice == 'Y');		//repeat loop if user enters y or Y
	
	system("pause");
	return 0;
}
bool isPrime(int& n)		//function definition
{
	int num, count = 0;
	
	for (int c = 1; c <= n; c++)
		if (n%c == 0)
			count++;
	if (count == 2)
		return n=true;
	else
		return n=false;
	
}
