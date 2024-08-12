// 2.20

// (Diameter, Circumference, and Area of a Circle)
// Write a program that reads in the radius of a circle as an integer and prints the circle’s diameter, circumference, and area. Use the constant value 3.14159 for pi.
// Do all calculations in output statements.
// [Note: In this chapter, we’ve discussed only integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that can have decimal points.]


#include <iostream>
using namespace std;
int main() {
    int radius;
    const int PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Diameter is: " << 2 * radius << "\n";
    cout << "Circumference is: " << 2 * PI * radius << "\n";
    cout << "Area is: " << PI * radius * radius << "\n";

    return 0;
}

