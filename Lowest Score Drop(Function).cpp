#include<iostream>
#include<iomanip>

using namespace std;
void getScore(double& test);
double findLowest(double num1, double num2, double num3, double num4, double num5);
double calcAverage(double num1, double num2, double num3, double num4, double num5);
int main()
{
	double num1, num2, num3, num4, num5, lowest;
	getScore(num1);
	getScore(num2);
	getScore(num3);
	getScore(num4);
	getScore(num5);

	calcAverage(num1, num2, num3, num4, num5);
	

	system("pause");
	return 0;
}
void getScore(double& test)
{
	cout << "Please enter the five test scores: \n";
	cin >> test;
	while (test < 0 || test >100)
	{
		cout << "You have entered an invalid test score.\n Please enter a score between 0 and 100: ";
		cin >> test;
	}

}
double calcAverage(double num1, double num2, double num3, double num4, double num5)
{ 
	double lowest;
	double average;

	lowest = findLowest(num1, num2, num3, num4, num5);
	
	average = ((num1 + num2 + num3 + num4 + num5) - lowest) / 4;

	cout << fixed << showpoint << setprecision(2);
	cout << "The average is " << average << ".\n";
	return average;
}
double findLowest(double num1, double num2, double num3, double num4, double num5)
{
	double lowest = num1;
	if (num2 < lowest)
		lowest = num2;
	if (num3 < lowest)
		lowest = num3;
	if (num4 < lowest)
		lowest = num4;
	if (num5<lowest)
		lowest = num5;
	cout << "The lowest score " << lowest << " will be dropped. \n";

	return lowest;

}