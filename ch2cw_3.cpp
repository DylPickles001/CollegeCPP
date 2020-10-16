#include <iostream>
using namespace std;
int main()
{
	double firstNumber, secondNumber, sumNumber;
	cout << "Enter Number 1:\n";
	cin >> firstNumber;
	cout << "Enter Number 2:\n";
	cin >> secondNumber;
	sumNumber = firstNumber + secondNumber;
	cout << firstNumber << " + " << secondNumber << " = " << sumNumber << endl;
	system("pause");
	return 0;
}

