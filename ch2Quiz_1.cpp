//Dylan Nguyen, 9/1/2020
//Chapter 2 Quiz- #1) Sum, Difference, Product of 2 numbers
#include <iostream>
using namespace std;
int main()
{
	double num1, num2, sum, difference, product;
	//Enter 2 numbers
	cout << "Enter Number 1:\n";
	cin >> num1;
	cout << "Enter Number 2:\n";
	cin >> num2;

	//sum
	sum = num1 + num2;
	cout << num1 << " + " << num2 << " = " << sum << endl;

	//difference
	difference = num1 - num2;
	cout << num1 << " - " << num2 << " = " << difference << endl;

	//product
	product = num1 * num2;
	cout << num1 << " * " << num2 << " = " << product << endl;

	system("pause");
	return 0;
}