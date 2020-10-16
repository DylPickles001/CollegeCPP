//Dylan Nguyen, 9/8/20, Ch.3 Homework #5
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declare variables
	double length, width, tilePrice, areaRect, totalPrice;
	//get input
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter tile price: $";
	cin >> tilePrice;
	
	//process
	areaRect = length * width;
	totalPrice = tilePrice * areaRect;

	//output
	cout << "Area: " << areaRect << endl;
	cout << fixed << setprecision(2);
	cout << "Total price: $" << totalPrice << endl;

	system("pause");
	return 0;
}