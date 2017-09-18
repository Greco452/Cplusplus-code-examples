#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void coinToss(int& result);

int main()
{
	unsigned seed = time(0);
	srand(seed);
	int a, endCount;
	cout << "How many times would you like to flip the coin? \n";
	cin >> endCount;
	for (int count = 0; count <= endCount; count++)
		coinToss(a);


	system("pause");
	return 0;
}
void coinToss(int& result)
{
	int min = 1;
	int max = 2;
	
	result = min + (rand() % (max - min + 1));
	if (result == 1)
		cout << "Heads!\n";
	else
		cout << "Tails!\n";
}