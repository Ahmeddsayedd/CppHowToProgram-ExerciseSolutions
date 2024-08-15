// (Calculating a Circle’s Diameter, Circumference and Area)
// Write a program that reads the radius of a circle (as a double value) and computes and prints the diameter, the circumference, and the area.
// Use the value 3.14159 for pi.



// Answer:

#include <iostream>
using namespace std;

int main()
{
    double radius, diameter, circumference, area, PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}

