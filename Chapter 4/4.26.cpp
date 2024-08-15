// (Palindromes)
// A palindrome is a number or a text phrase that reads the same backward as forward.
// For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554, and 11611.
// Write a program that reads in a five-digit integer and determines whether it’s a palindrome.
// [Hint: Use the division and modulus operators to separate the number into its individual digits.]

// Answer:
#include <iostream>
using namespace std;

int main()
{
    int number, originalNumber, reversedNumber = 0, remainder;

    cout << "Enter a five-digit integer: ";
    cin >> number;

    originalNumber = number;

    // Reverse the digits of the number
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;   // Note that we use 'reverseNumber * 10' to shift the digits and add the remainder in the same variable.
                                                            // This avoids the need for an additional variable to perform the multiplication and addition.

        originalNumber /= 10;
    }

    // Check if the original number and reversed number are the same
    if (number == reversedNumber)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
