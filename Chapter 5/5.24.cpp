
// (Diamond of Asterisks Modification)



// Answer:

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter number of rows (must be an odd number): ";
    cin >> num;

    if (num % 2 != 0) // Ensure the input is an odd number
    {
        // Upper part of the diamond
        for (int rows = 1; rows <= (num / 2 + 1); rows++)
        {
            for (int col = (num / 2); col >= rows; col--) // Number of spaces is half the number of rows
            {
                cout << " ";
            }
            for (int col = 1; col <= (rows * 2 - 1); col++)
            {
                cout << "*";
            }
            cout << endl;
        }

        // Lower part of the diamond
        for (int rows = (num / 2); rows >= 1; rows--)
        {
            for (int col = (num / 2); col >= rows; col--)
            {
                cout << " ";
            }
            for (int col = 1; col <= (rows * 2 - 1); col++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid number of rows";
    }

    return 0;
}


