#include <iostream>
using namespace std;

int main()
{
	enum Paint {red, blue, yellow, green, orange, purple};
	Paint color = green;


	if (color < 3)
		cout << "This is a primary color\n";
	else
		cout << "This is a mixed color" << endl;

	system("pause");
	return 0;
}