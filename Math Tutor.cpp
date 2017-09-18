/* Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael
Assignment: Programming #2
Date assigned: 10/6/16
Date due: 10/18/16
Date submitted:
Remark: This program can be used as a math tutor for a young student. The program displays two random numbers
between 10 and 50 that are to be added. If the answer is correct, a message of congratulations is
printed. If the answer is incorrect, a message is printed showing the correct answer
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	
	
	int max = 50;		//maximum value displayed in equation
	int min = 10;		//minimum value displayed in equation 
	int num1, num2, answer;
	
	unsigned seed = time(0);						//include seed
	srand(seed);									//randomly generate seed value
	num1 = min + (rand() % (int)(max - min + 1));	//randomly generate first value in quation 
	num2 = min + (rand() % (int)(max - min + 1));	//randomly generate second value in quation 
	
	cout << num1 << " + " << num2 << " = " << "?" << endl;		//output random equation 
	cin >> answer;

	if (answer == num1 + num2)									//validate for correct response
	{
		cout << "Congratulations that is correct!" << endl;
	}
	else if (answer != num1+num2)										//display the correct answer if input is wrong 
	{
		cout << "The correct answer was " << num1 + num2 << endl;
	}
	system("pause");
	return 0;

	
}