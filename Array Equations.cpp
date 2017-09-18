#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int arraysize = 10;
	int num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int total[10] = { 0.0};
	double avg[10] = { 0.0 };
	string name[10] = { "Lili", "Lucy", "Tom", "Larry", "Daisy", "Jimmy", "John", "Matt", "Joe", "Gina" };
	

	for (int i = 0; i < arraysize; i++)
	{
		total[i] = num[i] + num2[i];
		avg[i] = (num[i] + num2[i]) / 2.0;
	}

	for (int i = 0; i < arraysize; i++)
		cout << name[i] << " has a total of " << total[i] << " and an average of "<< avg[i] << endl;

	system("pause");
	return 0;
}