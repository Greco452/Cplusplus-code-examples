/*
Course: CS2300-01 Computer Science I, Fall 2016
Name: Greco, Michael/Levine, Scott
Assignment: Programming Arrays(Option 2)
Date due: 12/8/16
Date submitted:12/2/16
Remark: This program can be used by a small theater to sell tickets for performances. The theater’s auditorium
has 15 rows of seats, with 30 seats in each row. The program displays a screen that shows which seats are
available and which are taken. When the program begins, it asks the user to enter the seat prices for each row. The prices are stored
in a separate array. Once the prices are entered, the program displays a seating chart similar to the one shown above. The
user may enter the row and seat numbers for tickets being sold. Every time a ticket or group of tickets is
purchased, the program displays the total ticket prices and update the seating chart. The program keeps a total of all ticket sales. 
The user is given an option of viewing this amount. The program also gives the user an option to see a list of how many seats have been sold, how many
seats are available in each row, and how many seats are available in the entire auditorium.
*/

#include<iostream>
#include <iomanip>

using namespace std;
void ShowLayout();
void purchaseTicket();
void seatSales();
void seatsAvailable();

int Menu();

const int rows = 15;
const int seats = 30;
const char taken = '*';
const char open = '#';
char seatingBlueprint[rows][seats];
int rowChoice, seatChoice, choice, seatsOpen = 0;
int seatsOpenPerRow[rows];
int seatsBooked = 0;		//tally for number of seats booked 
char confirmBooking;		//char for Yes no confirm booking questions
double total = 0;			//total ticket sales
double singleTotal = 0;
double price[rows];			//array for price
double cost;				//array to display cost from price array 

int main()
{
	for (int count = 0; count < 15; count++)		//Loop to get row pricing
	{
		cout << "Enter the Price For Row " << (count + 1) << ": ";
		cin >> price[count];
		cout << endl;
	}

	for (int emptyRow = 0; emptyRow < rows; emptyRow++)			//loop to assign empty seats as # in theatre
	{
		for (int emptySeat = 0; emptySeat < seats; emptySeat++)
			seatingBlueprint[emptyRow][emptySeat] = open;
	}

	ShowLayout();

	do
	{
		choice = Menu();			//assign choice from Menu function 	
		switch (choice)
		{
		case 1: cout << "View Seat Prices\n\n";				//displays seat prices
			for (int count = 0; count < rows; count++)
			{
				cout << "The price for row " << setw(2) << setfill(' ') << (count + 1) << " = ";
				cout << price[count] << endl;
			}
			break;

		case 2: cout << "Purchase a Ticket\n\n";		//calls purchase ticket function
			purchaseTicket();
			break;

		case 3: cout << "View Available Seats\n\n";		//calls showlayout function
			ShowLayout();
			break;

		case 4: cout << "View Total Seat Sales & Seats Sold\n\n";		//calls seatSales function
			seatSales();
			break;

		case 5: cout << "View total seats available in the auditorium & number of seats open per row\n";		//calls seatsAvailable function
			seatsAvailable();
			break;

		case 6: cout << "Quit\n";			//Exits the program
			break;

		default: cout << "Error input\n";
		}
	} while (choice != 6);

	return 0;
}

int Menu()			//Displays menu for switch choices and returns value used for switch
{
	int choice;
	cout << endl << endl;
	cout << " \tMENU\n";
	cout << " 1) Seat Prices\n";
	cout << " 2) Ticket Purchase\n";
	cout << " 3) Available Seat Chart\n";
	cout << " 4) Total Ticket Sales\n";
	cout << " 5) Total Seat Sales/Seats Sold\n";
	cout << " 6) Quit\n";
	cout << "Please enter your choice: ";
	cin >> choice;

	while (choice < 1 || choice > 6)			//input validation for choice
	{
		cout << "You have entered an invalid choice. Please enter a choice between 1 and 6: ";
		cin >> choice;
	}
	return choice;
}

void ShowLayout()			// Shows the theatre layout with seats booked from purchaseTicket function changing from # to *
{
	cout << "\t\t\t\t  Welcome to the Theatre! \n";
	cout << "\t\t\t # are Open Seats | * is Unavailable Seating\n\n";
	cout << "Seats:   1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30";

	for (int rowCount = 0; rowCount < 15; rowCount++)
	{
		cout << "\nRow:" << setw(2) << setfill(' ') << (rowCount + 1) << " ";

		for (int seatCount = 0; seatCount < 30; seatCount++)
		{
			cout << setw(3) << setfill(' ') << seatingBlueprint[rowCount][seatCount];
		}
	}
	cout << endl;
}
void purchaseTicket()				// Prompts user to choose a row and seat to book. Changes seat from open to taken, tallies total running sales & total seats booked
{
	do
	{
		cout << "Which row would you like to buy a ticket from? \n";		//get row choice
		cin >> rowChoice;

		while (rowChoice > 15 || rowChoice < 1)		//input validation for row choice
		{
			cout << "You have entered an invalid row number. Please enter a row between 1 and 15\n";
			cin >> rowChoice;
		}

	repeatSeat:;																			//When seat choice is booked and user wants to try another in same row it traces back here
		cout << "Which seat in row " << rowChoice << " would you like to sit in?\n";		//seat choice
		cin >> seatChoice;

		while (seatChoice > 30 || seatChoice < 1)		//input validation for seat choice
		{
			cout << "You have entered an invalid seat number. Please enter a seat between 1 and 30\n";
			cin >> seatChoice;
		}

		if (seatingBlueprint[rowChoice - 1][seatChoice - 1] == taken)			//if the seat is taken * supposed to prompt user to pick a different seat 
		{
			cout << "That seat is currently booked. Please choose a different seat for row " << rowChoice << endl;
			goto repeatSeat;
		}

		else if (seatingBlueprint[rowChoice - 1][seatChoice - 1] == open)		//if the seat is open assign the price of the rowchoice to cost variable
		{
			cost = price[rowChoice-1];
			cout << "That ticket costs " << cost << "\nConfirm Booking(Y or N): ";
			cin >> confirmBooking;

			if (confirmBooking == 'Y' || confirmBooking == 'y')		//if booking is confirmed it adds to the total sales and shows that the booking is confirmed
			{
				singleTotal += cost;
				total += cost;
				cout << "Booking Confirmed\n";
				seatingBlueprint[rowChoice - 1][seatChoice - 1] = taken;		//assign taken char * to the corresponding coordinates 
				seatsBooked += 1;		//add to the amount of seats booked
				cout << "Would you like to book another seat?(Y or N)\n";
				cin >> confirmBooking;

				if (confirmBooking == 'Y' || confirmBooking == 'y')
					goto repeat;

				else if (confirmBooking == 'N' || confirmBooking == 'n')
					goto finish;
			}

			else if (confirmBooking == 'N' || confirmBooking == 'n')
			{
				cout << "Would you like to choose a different seat in row " << rowChoice << " instead ? (Y or N) : ";
				cin >> confirmBooking;

				if (confirmBooking == 'Y' || confirmBooking == 'y')
				{
					goto repeatSeat;
				}
				else if (confirmBooking == 'N' || confirmBooking == 'n')
					goto finish;
			}
		}

	repeat:;
		continue;
	} while (confirmBooking == 'Y' || 'y');
finish:;
	cout << "You're total cost today was $" << fixed << setprecision(2) << singleTotal << endl;
	singleTotal = 0;
}
void seatSales()		//Displays the results taken from purchaseTicket function for total sales & total seats booked
{
	cout << "The total current sales for the theatre is: " << fixed << setprecision(2) << total << endl;
	cout << "The total seats that have been booked today are: " << seatsBooked << endl;

}
void seatsAvailable()		//determines the total seats open in the theatre & total seats open per row then displays results
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < seats; j++)
			if (seatingBlueprint[i][j] == open)
			{
				seatsOpen += 1;
				seatsOpenPerRow[i] += 1;
			}
	cout << "The auditorium has " << seatsOpen << " seats available\n";

	for (int i = 0; i < rows; i++)
		cout << "Row " << setw(2) << setfill(' ') << (i + 1) << " has " << seatsOpenPerRow[i] << " seats open\n";
}