#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class student
{
private:

	string name;
	int q[100] = { 0 };	// 0 - 10; wt: .125
	int qNum;
	int qTotal;
	int mid;	// 0 - 100; wt: .25
	int final;	// 0 - 100; wt: .50
	double avg;
	char grade;

public:

	student();
	//Default Constructor
	//Postcondition: default values are set to variables from private class
	void inputScores();
	//Precondition: object must be called with the function
	//Postcondition: A prompt comes up to set a value for the students name, how many quizzes they want to input followed by the scores for those quizzes, 
	//the score for the midterm and lastly the score for the final

	void computeAvg();
	//Precondition: an object must be called with the function
	//Postcondition: this function takes the values inputted in the inputScores function and computes the average of all the scores

	char convertAvgToLetterGrade();
	//Precondition: an object must be called with the function
	//Postcondition: the average calculated in the computeAvg function is converted into a letter grade based on the common scoring guidelines for A, B, C, D, F

	void displayPerformanceRec();
	//Precondition: an object must be called with the function 
	//Postcondition: This function displays a performance record for the student object being called with the function.
	//this outputs the scores for all quizzes inputted, midterm score, final score, average score, and letter grade
};
student::student() //default constructor
{
	name = "Empty";
	qNum = 0;
	qTotal = 0;
	mid = 0;
	final = 0;
	avg = 0;
	grade= 'Z';
}

void student::inputScores() //function header
{
	cout << "Enter the name of the student (ex. Doe, John): ";  
	getline(cin, name); //gets entire line of input including whitespace characters
	cout << endl << "How many quizzes would you like to input?\n";
	cin >> qNum; //gets number of quizzes to be inputted
	
	for (int a = 0; a < qNum; a++)  //for loop to input multiple quiz grades
	{
		cout << "Enter Quiz#" << a + 1 << " Score(out of 10): ";
		cin >> q[a];
	}
	cout << "Enter score for Midterm(out of 100): "; 
	cin >> mid; //gets midterm score

	cout << "Enter score for Final(out of 100): ";
	cin >> final; //gets final score
	cout << endl;

}
void student::computeAvg() //function header
{
	for (int a = 0; a < qNum; a++)
		qTotal += q[a];
	
	avg = .125 * (qTotal) * 10 + .25 * mid + .5 * final;
}
char student::convertAvgToLetterGrade() // function header
{ 
	//if statements set from high scores to low with if/ else if statements to make sure proper grades are set

	if (avg >= 90) //if the average is greater than or equal to 90 the grade is returned as an A
	{
		return grade = 'A';
	}
	else if (avg >= 80)  //if the average is greater than or equal to 80 the grade is returned as a B
	{
		return grade = 'B';  
	}
	else if (avg >= 70)  //if the average is greater than or equal to 70 the grade is returned as a C
	{
		return grade = 'C';
	}
	else if (avg >= 60)  //if the average is greater than or equal to 60 the grade is returned as a D
	{
		return grade = 'D';
	}
	else if (avg < 60)  //if the average is less than 60 the grade is returned as an F
	{
		return grade = 'F';
	}
}
void student::displayPerformanceRec() // function header
{
	cout << "*** Performance Record of " << name << " ***";
	cout << "Test Scores: \n";
	for (int a = 0; a < qNum; a++) // for loop to display all quiz grades inputted
	{
		cout << "Quiz #" << a + 1 << ": ";
		cout << setw(4) << q[a] << endl;
	}
	cout << "Midterm: " << setw(4) << mid << endl; // display midterm score
	cout << "Final: " << setw(6) << setfill(' ') << final << endl << endl;  //display final score
	cout << fixed << setprecision(2); // set fixed point notation for the average with a precision of 2 decimal points
	cout << "Average: " << setw(4) << avg << endl; //display average 
	cout << "Grade: " << grade << endl; //display letter grade

}
int main() 
{
	student s1; // a student object s1 is declared 

	s1.inputScores(); //the inputScores function is called with the s1 object
	s1.computeAvg();  //the computeAvg function is called with the s1 object
	s1.convertAvgToLetterGrade();  //the convertAvgToLetterGrade function is called with the s1 object
	s1.displayPerformanceRec();  //the displayPerformance function is called with the s1 object

	return 0;
}
