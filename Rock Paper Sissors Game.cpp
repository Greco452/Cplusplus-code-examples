/*
Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael/Levine, Scott
Assignment: Programming #6
Date assigned: 11/22/16
Date due: 11/29/16
Date submitted:11/22/16
Remark: This program lets the user play the game of Rock, Paper, Scissors
against the computer. The computer will generate a random value of 1-3 which corresponds to rock, paper or sissors. 
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int computerAnswer(int& randNum);
void menu(int choice);
void checkWin(int player, int computer);

int main()
{
	int choice;
	do
	{
		cout << "     Rock, Paper, Sissors Game     \n-----------------------------------\n";
		cout << "1. Rock\n";
		cout << "2. Paper\n";
		cout << "3. Sissors\n";
		cout << "4. Quit Application\n";
		cout << "Please enter your choice: ";
		cin >> choice;
		
		while (choice < 1 || choice > 4)
		{
			cout << "You have entered an invalid choice. Please try again: \a";
			cin >> choice;
		}
		if (choice == 4)
			return 0;
		
		cout << "You Chose         :";
		menu(choice);

		int c = 0;
		computerAnswer(c);
		cout << "The Computer Chose:";
		menu(c);

		checkWin(choice, c);

	}while (choice >=1 && choice <=3);

	exit(0);
}
int computerAnswer(int& randNum)
{
	int min = 1;
	int max = 3;
	unsigned seed = time(0);
	srand(seed);
	int range = max - min + 1;
	randNum = (rand() % range + min);
	static_cast<int>(randNum);
	return randNum;
}
void menu(int choice)
{
	switch (choice)
	{
	case 1: cout << " Rock\n";
		break;
	case 2: cout << " Paper\n";
		break;
	case 3: cout << " Sissors\n";
		break;
	}
}
void checkWin(int player, int computer)
{
	if (computer == 1 && player == 1 || computer == 2 && player == 2 || computer == 3 && player == 3)
		cout << "It's a Draw!\n";
	else if (computer == 1 && player == 2 || computer == 2 && player == 3 || computer == 3 && player == 1)
		cout << "You Won!\n";
	else if (computer == 2 && player == 1 || computer == 3 && player == 2 || computer == 1 && player == 3)
		cout << "The Computer Won!\n";
}