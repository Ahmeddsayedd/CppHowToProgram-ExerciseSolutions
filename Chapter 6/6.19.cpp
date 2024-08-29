
// 6.19 (Hypotenuse Calculations)

// Solution:

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double side2);

int main()
{
    double side1, side2;

    cout << "Enter the two sides of the triangle separated by a space: ";
    cin >> side1 >> side2;

    cout << fixed << setprecision(2);
    cout << "The hypotenuse of the triangle with sides "
         << side1 << " and " << side2
         << " is: " << hypotenuse(side1, side2) << endl;

    return 0;
}

double hypotenuse(double side1, double side2)
{
    return sqrt(side1 * side1 + side2 * side2);
}
