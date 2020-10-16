//Dylan Nguyen, 9/8/20, Ch3 Homework #7
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declare
	double dollarAmount, poundAmount, pesoAmount, yenAmount;
	//input
	cout << "Enter US Dollar Amount: $";
	cin >> dollarAmount;
	
	//process
	poundAmount = dollarAmount * 0.571505;
	pesoAmount = dollarAmount * 10.7956;
	yenAmount = dollarAmount * 112.212;

	//output
	cout << fixed << setprecision(2);
	cout << "US $" << dollarAmount << " in Pounds: " << poundAmount << endl;
	cout << "US $" << dollarAmount << " in Pesos: " << pesoAmount << endl;
	cout << "US $" << dollarAmount << " in Yen: " << yenAmount << endl;
	system("pause");
	return 0;
}