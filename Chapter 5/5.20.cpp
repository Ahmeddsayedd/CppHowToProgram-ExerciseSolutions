
// (Pythagorean Triples)



// Answer:
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int side1, side2, hypotenuse;

    // Print table headers with appropriate column widths
    cout << "Side1" << setw(10) << "Side2" << setw(15) << "Hypotenuse" << endl;

    // Loop through possible values for side1
    for (side1 = 1; side1 <= 500; side1++)
    {
        // Loop through possible values for side2
        for (side2 = 1; side2 <= 500; side2++)
        {
            // Loop through possible values for hypotenuse, starting from 500 down to 2
            for (hypotenuse = 500; hypotenuse > 1; hypotenuse--)
            {
                // Check if the sides satisfy the Pythagorean theorem
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
                {
                    // Print the sides and hypotenuse in a formatted table
                    cout << setw(5) << side1
                         << setw(10) << side2
                         << setw(15) << hypotenuse << endl;
                }
            }
        }
    }

    return 0;
}
