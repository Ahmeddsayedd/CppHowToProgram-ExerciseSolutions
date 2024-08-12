// 2.27

//  (Integer Equivalent of a Character)
// Write a program that prints the integer equivalent of a character typed at the keyboard. Store the input in a variable of type char.
// Test your program several times using uppercase letters, lowercase letters, digits, and special characters (like $).



#include <iostream>
using namespace std;
int main ()
{
    char chara;
    cout << "Enter a char to find it's ASCII: ";
    cin>> chara;
    cout << static_cast<int> (chara);

    return 0;
}
