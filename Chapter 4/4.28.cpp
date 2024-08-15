// (Checkerboard Pattern of Asterisks)
// Write a program that displays the following checkerboard pattern. Your program must use only three output statements,
// one of each of the following forms:
// cout << "*";
// cout << " ";
// cout << endl;


// Answer:

#include <iostream>
using namespace std;
int main ()
{
    int rows=1, columns;
    while (rows<=8)
    {
        columns=1;
        while (columns<=8)
        {
            if (rows%2==0)
            {
                // We use nested 'if' statements instead of the '&&' operator to check conditions because the '&&' operator
                // has not been covered in this chapter yet. This approach ensures we adhere to the concepts introduced so far
                // while achieving the desired checkerboard pattern.

                if (columns==1)
                {
                    cout << " ";
                }
            }
            cout << "* ";
            columns++;
        }
        cout << endl;
        rows++;
    }

    return 0;
}


        // Note: The current approach prints 8 asterisks for every row, including even rows. If you want every even row
        // to have 7 asterisks instead of 8, you can use the following logic:
        // (rows % 2 == 0 && columns == 1) ? cout << " " : cout << "* ";

                 // Difference between the approaches:
// The current approach prints 8 asterisks per row, with a space added for even rows at the start.
// The alternative approach with the (else) in the condition would print 7 asterisks per even row,
// as it directly handles the first column differently to achieve the desired pattern.



