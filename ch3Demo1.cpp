//Case04-1: Displaying the value of PI with different precision values

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare constant
    const double PI = 3.141593;

    //display PI with different precision values
    cout << fixed;
    cout << setprecision(0) << PI << endl;
    cout << setprecision(1) << PI << endl;
    cout << setprecision(2) << PI << endl;
    cout << setprecision(3) << PI << endl;
    cout << setprecision(4) << PI << endl;
    cout << setprecision(5) << PI << endl;
    cout << setprecision(6) << PI << endl;
    cout << setprecision(7) << PI << endl;
    system("pause");
    return 0;
} //end of main function
