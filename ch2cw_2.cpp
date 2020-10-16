//Dylan Nguyen, 8/25/20, ch2cw_2
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double totalBill, tipPercentage, tip;
	cout << "Enter the total bill: \n";
	cin >> totalBill;
	cout << "Enter the tip percentage: \n";
	cin >> tipPercentage;
	tip = tipPercentage * totalBill;
	cout << fixed << setprecision(2);
	cout << "Tip amount: $" << tip << endl;
	system("pause");
	return 0;
}