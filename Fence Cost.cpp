//soil flowerseeds fence calculate cost
#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	double total, soil, flowerseeds, fence;
	
	cout << fixed << setprecision(2);
	cout << "How many bags of soil are needed? " << endl;
	cin >> soil;
	soil *= 10.00 ;

	cout << "How many bags of seeds are needed? " << endl;
	cin >> flowerseeds;
	flowerseeds *= 12.50;

	cout << "How many boards of fence are needed? " << endl;
	cin >> fence;
	fence *= 18.25;

	total = fence + flowerseeds + soil;

	cout << "The total cost will be $" << total << endl;
	
	system("pause");
	return 0;


}