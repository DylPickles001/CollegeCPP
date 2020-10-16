//Dylan Nguyen, 8/25/20, ch2cw_1
#include <iostream>
using namespace std;
int main()
{
	// declare variables
	double length, width, height, volume;

	//get input values
	cout << "Enter length:\n";
	cin >> length;
	cout << "Enter width:\n";
	cin >> width;
	cout << "Enter height:\n";
	cin >> height;
	//process- calculate volume
	volume = length * width * height;

	//display
	cout << "The volume of the pool is " << volume << endl;

	system("pause");
	return 0;
}