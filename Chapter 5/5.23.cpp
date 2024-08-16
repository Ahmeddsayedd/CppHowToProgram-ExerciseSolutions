
// (Diamond of Asterisks)



// Answer:

#include <iostream>
using namespace std;

int main()
{
    // Upper part of the diamond shape
    for (int rows = 1; rows <= 5; rows++)
    {
        for (int col = 4; col >= rows; col--)
        {
            cout << " ";
        }
        for (int col = 1; col <= (rows * 2 - 1); col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond shape
    for (int rows = 4; rows >= 1; rows--)
    {
        for (int col = 4; col >= rows; col--)
        {
            cout << " ";
        }
        for (int col = 1; col <= (rows * 2 - 1); col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


