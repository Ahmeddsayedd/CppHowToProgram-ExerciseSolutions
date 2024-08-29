
// 6.23 (Square of Any Character)

// Solution:

#include <iostream>
using namespace std;

void squareOfAnyChar(int side, char fillCharacter);

int main()
{
    int num;
    char character;

    cout << "Enter the side length of the square: ";
    cin >> num;

    cout << "Enter the character to fill the square: ";
    cin >> character;

    squareOfAnyChar(num, character);

    return 0;
}

void squareOfAnyChar(int side, char fillCharacter)
{
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
}
