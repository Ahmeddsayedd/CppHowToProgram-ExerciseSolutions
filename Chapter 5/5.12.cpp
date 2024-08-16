// (Drawing Patterns with Nested for Loops)
// Write a program that uses for statements to print the following patterns separately, one below the other.
// Use for loops to generate the patterns. All asterisks (*) should be printed by a single statement of the form cout << '*'; (this causes the
// asterisks to print side by side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks.
// Extra credit: Combine your code from the four separate problems into a single program that prints all four patterns side by
// side by making clever use of nested for loops.]


// Answer:

#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    // a)
    for (rows = 1; rows <= 10; rows++) {
        for (columns = 1; columns <= rows; columns++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\n";

    // b)
    for (rows = 1; rows <= 10; rows++) {
        for (columns = 10; columns >= rows; columns--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\n";

    // c)
    for (rows = 1; rows <= 10; rows++) {
        for (columns = 1; columns < rows; columns++) {
            cout << " ";
        }
        for (columns = 10; columns >= rows; columns--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\n";

    // d)
    for (rows = 1; rows <= 10; rows++) {
        for (columns = 10; columns >= rows; columns--) {
            cout << " ";
        }
        for (columns = 1; columns <= rows; columns++) {
            cout << "*";
        }
        cout << endl;
    }


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


    cout << "\n \n \n \n \n \n \n \n";


    // EXTRA CREDIT SOLUTION

    // NOTES:
    // Treat each shape as a rectangle and print both spaces and '*' to complete each shape.
    // Print each row for all shapes simultaneously before moving to the next row.
    // Unlike individual shapes that only handle their own lines, here you need to print spaces
    // for each shape to align them correctly side by side.
    // Compare this with the previous code where each shape was printed separately, which helps
    // in understanding the difference in approach.

for (rows=1; rows<=10; rows++)
    {
        // a)
        for (columns=1; columns<=rows; columns++)
        {
            cout << "*";
        }
        for (columns=rows+1; columns<=10; columns++)
        {
            cout << " ";
        }
        cout << " ";


        // b)
        for (columns=1; columns<=(11-rows); columns++)
        {
            cout << "*";
        }
        for (columns=(11-rows)+1; columns<=10; columns++)
        {
            cout << " ";
        }
        cout << " ";


        // c)
        for (columns=(11-rows)+1; columns<=10; columns++)
        {
            cout << " ";
        }
        for (columns=rows; columns<=10; columns++)
        {
            cout << "*";
        }
        cout << " ";


        // d)
        for (columns=(rows+1); columns<=10; columns++)
        {
            cout << " ";
        }
        for (columns=(11-rows); columns<=10; columns++)
        {
            cout << "*";
        }
        cout << endl;

    }


    return 0;
}






