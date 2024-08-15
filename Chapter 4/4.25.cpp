// ((Square of Asterisks)
// Write a program that reads in the size of the side of a square, then prints a hollow square of that size out of asterisks and blanks.
// Your program should work for squares of all side sizes between 1 and 20. For example, if your program reads a size of 5, it should print:

// Answer:

#include <iostream>
using namespace std;

int main ()
{
    int N, rows = 1, columns;
    cout << "Enter size of square (from 1 to 20): ";
    cin >> N;

    // We use nested 'if' statements instead of the '&&' operator to check multiple conditions
    // because we haven't covered logical operators like '&&' or '||' in this chapter yet.
    // This approach allows us to meet the problem's requirements while adhering to the concepts
    // introduced so far.

    if (N > 1)
    {
        if (N <= 20)
        {
            while (rows <= N)
            {
                columns = 1; // Reset the 'columns' variable to 1 at the start of each new row iteration
                             // to ensure that each row is processed from the first column to the last.

                while (columns <= N)
                {
                    // Checking the first and last row without using the '||' operator
                    if (rows == 1)
                    {
                        cout << "*";
                    }
                    else if (rows == N)
                    {
                        cout << "*";
                    }
                    else
                    {
                        // Checking the first and last column without using the '||' operator
                        if (columns == 1)
                        {
                            cout << "*";
                        }
                        else if (columns == N)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    columns++;
                }
                cout << endl;
                rows++;
            }
        }
        else
        {
            cout << "Invalid Entry";
        }
    }
    else
    {
        cout << "Invalid Entry";
    }

    // There are two 'cout' statements for "Invalid Entry" because we perform two separate checks:
    // 1. To ensure that the size 'N' is greater than 1.
    // 2. To ensure that the size 'N' is less than or equal to 20.
    // If 'N' does not meet either condition, the corresponding "Invalid Entry" message is displayed.

    return 0;
}






// The next code is an alternative approach that utilizes logical operators '&&' and '||' to check multiple conditions in a more concise manner.
// It demonstrates how you can simplify condition checking using these operators.
// I suggest revisiting this code when you study '&&' and '||' in the next chapter to see how they can be effectively applied.


/*


#include <iostream>
using namespace std;

int main()
{
    int size, row = 1, col;
    cout << "Enter size of square (from 1 to 20): ";
    cin >> size;

    if (size > 1 && size <= 20)
    {
        while (row <= size)
        {
            col = 1;
            while (col <= size)
            {
                // Print '*' on the borders and first/last row, otherwise print a space
                if (row == 1 || row == size || col == 1 || col == size)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                col++;
            }
            cout << endl;
            row++;
        }
    }
    else
    {
        cout << "Invalid Entry. Please enter a number between 1 and 20." << endl;
    }

    return 0;
}


*/


