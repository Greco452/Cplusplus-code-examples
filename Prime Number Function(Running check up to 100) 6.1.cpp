/*
Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael/Levine, Scott
Assignment: Programming #6
Date assigned: 11/22/16
Date due: 11/29/16
Date submitted:11/22/16
Remark: This program shows a running total of every number between 1 and 100 that is a prime number. Using the isPrime function
the each number put in through the test variable is returned as a bool value true or false. If it is true the origional number put in for the test is shown.
The loop then reiterates and assigns the next value in the sequence back to test. This repeats until reaching 100.
*/
#include<iostream>
#include<cctype>

using namespace std;
bool isPrime(int& n);		//function prototype

int main()
{
	int num = 1;

	for (int count = 1; count < 101; count++)
	{
		int test = num;
		isPrime(test);
		if (test == true)		//if function is true 
			cout << num << "  ";
		num++; // reassign test variable from bool solution to the next test number
	}

	system("pause");
	return 0;
}
bool isPrime(int& n)		//function definition
{
	int count = 0;

	for (int i = 1; i <= n; i++) // loop for prime test
	{
		if (n%i == 0)		//if the number has no remainder add 1 to count
			count++;
	}
	if (count == 2)		//if the number is only divisible by 1 and itself it is prime. Count will only == 2 if the if loop inside the for test initializes twice.
		return n = true;
	else
		return n = false;

}
