
// 6.22 (Square of Asterisks)

// Solution:

#include <iostream>
using namespace std;

void asterisks(int side);

int main()
{
    int num;
    cout << "Enter the side length of the square of asterisks: ";
    cin >> num;

    asterisks(num);

    return 0;
}

void asterisks(int side)
{
    // Outer loop iterates through each row of the square.
    for (int i = 1; i <= side; i++)
    {
        // Inner loop prints the asterisks for each column in the current row.
        for (int j = 1; j <= side; j++)
        {
            cout << "*";
        }
        // Move to the next line after printing a row of asterisks.
        cout << endl;
    }
}
