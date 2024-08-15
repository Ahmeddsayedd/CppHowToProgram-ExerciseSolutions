// (Sides of a Triangle)
// Write a program that reads three nonzero double values and determines and prints whether they could represent the sides of a triangle.



// Answer:


#include <iostream>
using namespace std;
int main ()
{
    double side1, side2, side3;
    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1+side2>side3)
    {
        if (side2+side3>side1)
        {
            if (side1+side3>side2)
            {
                cout << "Triangle";
            }
            else
                cout << "NOT";
        }
        else
            cout << "NOT";
    }
    else
        cout << "NOT";

    return 0;
}


// We use three nested 'if' statements instead of the '&&' operator to check the conditions for a valid triangle.
// This is because the '&&' operator has not been covered in this chapter yet. Each 'if' statement independently checks
// one condition, and only if all conditions are satisfied does the program determine that the sides form a valid triangle.


