//Dylan Nguyen, 9/8/20, Ch3 Homework #6
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declare
	double diameter, railPrice, PI, totalPrice, totalRailing;
	PI = 3.1416;
	//input
	cout << "Enter Diameter: ";
	cin >> diameter;
	cout << "Enter Rail Price: $";
	cin >> railPrice; 
	//process
	totalRailing = diameter * PI;
	totalPrice = totalRailing * railPrice;
	//output
	cout << fixed << setprecision(2);
	cout << "Total Rail Price: $" << totalPrice << endl;

	system("pause");
	return 0;
}