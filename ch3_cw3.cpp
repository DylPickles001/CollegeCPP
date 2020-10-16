//Dylan Nguyen, 9/3/2020, Ch.3 classwork #3
#include <iostream>
using namespace std;
int main()
{
	//declare variables num1 and num2
	double num1, num2, sum, difference;
	cout << "Enter first number:\n";
	cin >> num1;
	cout << "Enter second number:\n";
	cin >> num2;
	//process
	sum = num1 + num2;
	difference = num1 - num2;
	
	//output
	cout << num1 << " + " << num2 << " = " << sum << endl;
	cout << num1 << " - " << num2 << " = " << difference << endl;

	system("pause");
	return 0;
}