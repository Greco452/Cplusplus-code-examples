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
#include <iomanip>
using namespace std;

int main()
{

	int choice, exitLoop;
	int max = 1000;		//maximum value displayed in equation
	int min = 1;		//minimum value displayed in equation 
	int num1, num2, answer;
	double answerd = 0;
	exitLoop = 1;

	while (exitLoop <= 5 && exitLoop >= 1)
	{
		unsigned seed = time(0);						//include seed
		srand(seed);									//randomly generate seed value
		num1 = min + (rand() % (int)(max - min + 1));	//randomly generate first value in quation 
		num2 = min + (rand() % (int)(max - min + 1));	//randomly generate second value in quation 

		cout << setw(20) << "Math Tutor Menu" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << "1. Addition Problem" << endl;
		cout << "2. Subtraction Problem" << endl;
		cout << "3. Multiplication Problem" << endl;
		cout << "4. Division Problem" << endl;
		cout << "5 Quit this program" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << "Enter your choice <1-5>" << endl;
		cin >> choice;

		if (choice > 5 || choice < 1)
		{
			cout << "You have entered an invalid choice. Please choose one of the 5: ";
			cin >> choice;
		}

		exitLoop = choice;
		switch (choice)
		{

		case 1: cout << right << "   " << num1 << endl << " + " << left << num2 << "\n   ----" << endl;		//output random equation 
			cin >> answer;
			if (answer == num1 + num2)									//validate for correct response
				cout << "Congratulations that is correct!" << endl;
			else if (answer != num1 + num2)										//display the correct answer if input is wrong 
				cout << "The correct answer was " << num1 + num2 << endl;
			cout << endl;
			break;

		case 2: cout << right << "   " << num1 << endl << " - " << left << num2 << "\n   ----" << endl << endl;		//output random equation 
			cin >> answer;
			if (answer == num1 - num2)									//validate for correct response
				cout << "Congratulations that is correct!" << endl;
			else if (answer != num1 - num2)										//display the correct answer if input is wrong 
				cout << "The correct answer was " << num1 - num2 << endl;
			cout << endl;
			break;

		case 3: cout << right << "   " << num1 << endl << " * " << left << num2 << "\n   ----" << endl;		//output random equation 
			cin >> answer;
			if (answer == num1 * num2)									//validate for correct response
				cout << "Congratulations that is correct!" << endl;
			else if (answer != num1 * num2)										//display the correct answer if input is wrong 
				cout << "The correct answer was " << num1 * num2 << endl;
			cout << endl;
			break;

		case 4:
			cout << fixed << setprecision(2) << num1 << " / " << num2 << " = " << "?" << endl;		//output random equation 
			cin >> answerd;
			if (answerd == double(num1) / num2)								//validate for correct response
				cout << "Congratulations that is correct!" << endl;
			else if (answerd != double(num1) / num2)										//display the correct answer if input is wrong 
				cout << "The correct answer was " << double(num1) / double(num2) << endl;
			cout << endl;
			break;


		case 5: return 0;
		}
	}
	system("pause");
}
