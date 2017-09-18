#include <iostream>
using namespace std;

char square1 = '1', square2 = '2', square3 = '3',
square4 = '4', square5 = '5', square6 = '6',
square7 = '7', square8 = '8', square9 = '9';

int checkwin();
void board();

int main()
{

	int result, choice;
	char mark;
	int player = 1;
	do{
		board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square1 == '1')
			square1 = mark;
		else if (choice == 2 && square2 == '2')
			square2 = mark;
		else if (choice == 3 && square3 == '3')
			square3 = mark;
		else if (choice == 4 && square4 == '4')
			square4 = mark;
		else if (choice == 5 && square5 == '5')
			square5 = mark;
		else if (choice == 6 && square6 == '6')
			square6 = mark;
		else if (choice == 7 && square7 == '7')
			square7 = mark;
		else if (choice == 8 && square8 == '8')
			square8 = mark;
		else if (choice == 9 && square9 == '9')
			square9 = mark;
		else
		{
			cout << "You made an invalid move\n Press enter and then input a valid choice: ";
			player--;
			cin.ignore(2);
		}

		result = checkwin();
		player++;


	} while (result == -1);
	board();

	if (result == 1)
		cout << "Player \a" << --player <<" is the winner!" << endl;
	else{
		cout << "*******************" << endl;
		cout << "\a\tGame draw" << endl;
		cout << "*******************" << endl;
	}

	system("pause");
	return 0;
}
/*********************************************
FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT (marks in a horizontal, vertical, or diagonal row are the same.
-1 FOR GAME IS IN PROGRESS (there are squares that are not marked)
O GAME IS OVER AND NO RESULT

**********************************************/
int checkwin()
{
	if (square1 == square2 && square2 == square3)
		return 1;
	else if (square4 == square5 && square5 == square6)
		return 1;
	else if (square7 == square8 && square8 == square9)
		return 1;
	else if (square1 == square4 && square4 == square7)
		return 1;
	else if (square2 == square5 && square5 == square8)
		return 1;
	else if (square3 == square6 && square6 == square9)
		return 1;
	else if (square1 == square5 && square5 == square9)
		return 1;
	else if (square3 == square5 && square5 == square7)
		return 1;
	else if (square1 != '1' && square2 != '2' && square3 != '3'
		&& square4 != '4' && square5 != '5' && square6 != '6'
		&& square7 != '7' && square8 != '8' && square9 != '9')
		return 0;
	else
		return -1;
}


/***************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE
***************************************/

void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 = X  &  Player 2 = O" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square1 << "  |  " << square2 << "  |  " << square3 << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square4 << "  |  " << square5 << "  |  " << square6 << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square7 << "  |  " << square8 << "  |  " << square9 << endl;

	cout << "     |     |     " << endl << endl;
}
