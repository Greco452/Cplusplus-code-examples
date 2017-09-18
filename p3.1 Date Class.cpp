// Course: CS2400-60 Computer Science 2
// Name: Greco, Michael 
// Assignment: P3.1
// Date assigned: 2/22/17
// Date due: 3/2/17
// Date handed in: 2/28/17
// Remark: This program uses the class date to display a date in two different formats as well as compare
// two object dates with eachother to see which is greater. This program contains a private class consisting of the main variables month, day, and year.
// The public class contains a default constructor, a second constructor, function setDate to assign a date to an object that has already been declared,
// displayDateV1 and displayDateV2 to display the dates in different formats, and lastly a compareDates function to compare both date objects with eachother
// to see which is greater. 
#include<iostream>
#include<string>
using namespace std;

class date
{
private:
	int month;
	int day;
	int year;
public:
	date();	// Default constructor
		// Precondition: declare an object
		// Postcondition: the newly declared date object is initialized to 01/01/2000

	date(int mm, int dd, int yyyy);	// Second constructor
		// Precondition: an object from the date class must be declared and passed 3 integer values
		// Postcondition: the newly declared data object is initialized to mm/dd/yyyy

	void setDate(int mm, int dd, int yyyy);
	// Precondition: an object from the date class must be used with the function and three integer values must be passed to it
	// Postcondition: set the contents of the calling date object to the values passed to the function

	void displayDateV1();
	// Precondition: an object from the date class must be used
	// Postcondition: display the calling date object in mm/dd/yyyy format, e.g., 02/22/2017

	void displayDateV2(); 
	// Precondition: an object from the date class must be used
	// Postcondition: display the calling date object in the  format like: February 22, 2017

	int compareDates(date &dObj);
	// Precondition: an object must be used with the function from the date class & another object must be passed to the function to be compared
	// Postcondition: returns -1, 0, or 1 if the calling date object if less than, equal to, or greater than dObj, respectively.

};
date::date() // Default Construct
{
	month = 01;
	day = 01;
	year = 2000;
}
date::date(int mm, int dd, int yyyy) //Second Construct
{
	month = mm;
	day = dd;
	year = yyyy;
}
void date::setDate(int mm, int dd, int yyyy) //setDate function header
{
	month = mm;
	day = dd;
	year = yyyy;
}
void date::displayDateV1() //displayDateV1 function header
{
	cout << month << "/" << day << "/" << year << endl; // displays date in mm/dd/yyyy format
}
void date::displayDateV2() //displayDateV2 function header 
{
	const int arraySize = 12; // declares array size for monthName array 
	string monthName[arraySize] = { "January","February","March","April","May","June","July","August","September","October","November","December" }; 
	//string array contains the names of each month 
	cout << monthName[month - 1] << " " << day << ", " << year << endl; //displays the correct month name string for the integer value in month variable
}
int date::compareDates(date &dObj) //compareDates function header 
{
	if (year < dObj.year) //compares the value of the year used in d to the object d1 passed to the function. If d is less than d1 it will return -1
		return -1;
	else if (year > dObj.year) //if the year stored in the object d is greater than the year stored in d1 it returns 1
		return 1;
	else if (year == dObj.year) //if the year stored in the object d is equal to the year stored in d1 it initializes an if statement to compare the month
	{
		if (month < dObj.month) //if the month stored in the object d is less than the month stored in d1 it returns 1
			return -1;
		else if (month > dObj.month) //if the month stored in the object d is greater than the month stored in d1 it returns 1
			return 1;
		else if (month == dObj.month) //if the month stored in the object d is equal to the month stored in d1 it initializes an if statement to compare the day
		{
			if (day < dObj.day) //if the day stored in the object d is less than the day stored in d1 it returns 1
				return -1;
			else if (day > dObj.day) //if the day stored in the object d is greater than the day stored in d1 it returns 1
				return 1;
			else if (day == dObj.day) //if the day stored in the object d is equal to the day stored in d1 it returns 0
				return 0;
		}
	}
}
int main()
{
	date d, d1; //declare and initialize 2 date objects
	d1.setDate(02, 21, 2017);
	d.setDate(02, 21, 2017); // use the setDate function to assign value to the object d
	d.displayDateV1();  //use the displayDateV1 function to display the d object in mm/dd/yyyy format
	d.displayDateV2();	//use the displayDateV2 function to display the d object in Month String/day/year format
	int compareResult = d.compareDates(d1);	//set the integer compareResult to take the result of the compareDates function 
	
	if (compareResult == 1) //output result
		cout << "The date object d is greater than d1\n";
	if (compareResult == -1)
		cout << "The date object d is less than d1\n";
	if (compareResult == 0)
		cout << "The date object d is equal to d1\n";

	system("pause");
	return 0;

}