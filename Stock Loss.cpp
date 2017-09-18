/* Kathryn bought 750 shares at 35 per share.
1 year later she sold for 31.15
Display total amount paid for stock
total amount recieved from selling
amount of money lost
*/
#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
	int shares;
	double costPer, total, loss;
	cout << fixed << setprecision(2);
	shares = 750;
	costPer = 35.00;
	total = shares*costPer;

	cout << "Amount of shares purchased: " << shares << endl;
	cout << "Amount paid per share: $" << costPer << endl;
	cout << "Total initial investment: $" << total << endl;

	costPer = 31.15;
	loss = costPer*shares;
	total = total - loss;
	cout << "Total Loss: $" << total << endl;
	system("pause");
	return 0;

}