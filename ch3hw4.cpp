//Dylan Nguyen, 9/8/20, Ch.3 Homework #4
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declare variables
	double totalBill, tip1Bill, tip2Bill, tip3Bill;
	
	//get input
	cout << "Enter the total bill: $";
	cin >> totalBill;

	//process, setprecision(2) for 2 decimal places
	tip1Bill = totalBill * 1.1;
	tip2Bill = totalBill * 1.15;
	tip3Bill = totalBill * 1.2;
	cout << fixed << setprecision(2);
	cout << "Total bill with 10% tip: $" << tip1Bill << endl;
	cout << "Total bill with 15% tip: $" << tip2Bill << endl;
	cout << "Total bill with 20% tip: $" << tip3Bill << endl;

	system("pause");
	return 0;
}