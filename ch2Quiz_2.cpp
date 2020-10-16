//Dylan Nguyen, 9/1/2020
//Chapter 2 Quiz- #2) Sales Discount
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double originalPrice, discountAmount, discountPrice;
	cout << "Enter original price:\n";
	cin >> originalPrice;
	discountAmount = originalPrice * 0.10;

	//setprecision(2) for only 2 decimal places as money only has 2 decmial places
	cout << fixed << setprecision(2);
	cout << "Discount Amount: " << discountAmount << endl;

	//setprecision(2) for only 2 decimal places as money only has 2 decmial places
	discountPrice = originalPrice - discountAmount;
	cout << fixed << setprecision(2);
	cout << "Discount Price: " << discountPrice << endl;

	system("pause");
	return 0;
}