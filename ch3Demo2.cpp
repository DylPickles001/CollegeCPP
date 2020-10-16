//Case04-2: Calculate the volume of a rectangular pool

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //declare variables
    double length = 0.0;
    double width = 0.0;
    double depth = 0.0;
    double area = 0.0;
    double volume = 0.0;
    string customer = "";

    //enter input items
    cout << "Enter the name of the customer: ";
    getline(cin, customer); //cin >> customer;
    cout << "Enter the length of the rectangular pool: ";
    cin >> length;
    cout << "Enter the width of the rectangular pool: ";
    cin >> width;
    cout << "Enter the depth of the rectangular pool: ";
    cin >> depth;

    //calculate area and volume
    area = width * length;
    volume = area * depth;

    //display output items
    cout << "Customer: " << customer << endl;
    cout << fixed << setprecision(2) << "Volume: " << volume << endl;
    system("pause");
    return 0;
} //end of main function
