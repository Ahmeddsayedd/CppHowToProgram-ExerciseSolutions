// (Sides of a Right Triangle)
// Write a program that reads three nonzero integers and determines and prints whether they’re the sides of a right triangle.



// Answer:


#include <iostream>
using namespace std;

int main ()
{
    double side1, side2, side3;
    int triangle;

    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Checking if the sides form a valid triangle
    // This is based on the code from the previous program.
    // We used nested 'if' statements instead of the '&&' operator to verify all conditions
    // because the '&&' operator has not been covered in this chapter yet.
    if (side1 + side2 > side3)
    {
        if (side2 + side3 > side1)
        {
            if (side1 + side3 > side2)
            {
                triangle = 1;
            }
            else
            {
                triangle = 0;
            }
        }
        else
        {
            triangle = 0;
        }
    }
    else
    {
        triangle = 0;
    }

    // The 'triangle' flag is used to determine whether the sides entered by the user form a valid triangle.
    // This validation is an extra credit and was not one of the original requirements of the question.
    // It's done to ensure the sides can form a triangle before checking if it's a right-angle triangle.
    if (triangle)
    {
        // Checking if the sides form a right triangle
        // We avoided using the '||' operator and instead used nested 'if' statements with 'else'
        // as an alternative approach because the '||' operator has not been covered in this chapter yet.
        if (side1 * side1 + side2 * side2 == side3 * side3)
        {
            cout << "Right Triangle";
        }
        else
        {
            if (side3 * side3 + side2 * side2 == side1 * side1)
            {
                cout << "Right Triangle";
            }
            else
            {
                if (side1 * side1 + side3 * side3 == side2 * side2)
                {
                    cout << "Right Triangle";
                }
                else
                {
                    cout << "Not a Right Triangle";
                }
            }
        }
    }
    else
    {
        cout << "Not a triangle, invalid sides";
    }

    return 0;
}








// Note: After you learn about logical operators like '&&' and '||' in the next chapter,
// you can revisit this exercise to see how these operators can be used for a more concise and efficient solution.


/*



#include <iostream>
using namespace std;
int main ()
{
    double side1, side2, side3; int triangle;
    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
    {
        triangle=1;
    }
    else
        triangle=0;

    if (triangle)
    {
        if (side1*side1+side2*side2==side3*side3 || side3*side3+side2*side2==side1*side1 ||side1*side1+side3*side3==side2*side2)
        {
            cout<< "Right Triangle";
        }
        else
        cout << "NOT Right triangle";
    }
    else
        cout << "Not triangle, invalid sides";
}



*/


