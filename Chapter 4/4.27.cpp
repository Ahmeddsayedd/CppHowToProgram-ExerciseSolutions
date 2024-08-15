// (Printing the Decimal Equivalent of a Binary Number)
// Input an integer containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent.
// Use the modulus and division operators to pick off the “binary” number’s digits one at a time from right to left.
// Much as in the decimal number system, where the rightmost digit has a positional value of 1, the next digit left has a positional value of 10,
// then 100, then 1000, and so on, in the binary number system, the rightmost digit has a positional value of 1, the next digit left has a positional
// value of 2, then 4, then 8, and so on.
// Thus, the decimal number 234 can be interpreted as 2100 + 310 + 41. The decimal equivalent of binary 1101 is 11 + 02 + 14 + 1*8, or 1 + 0 + 4 + 8, or 13.
// [Note: To learn more about binary numbers, refer to Appendix D.]


// Answer:

#include <iostream>
using namespace std;

int main()
{
    int binaryNumber, remainder, positionalValue = 1, decimalEquivalent = 0;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;


    // To convert a binary number to its decimal equivalent, we process each digit of the binary number
    // from right to left. We use the modulus operator '%' to extract the rightmost digit and multiply
    // it by the current positional value, which starts at 1 and is doubled each iteration (1, 2, 4, 8, etc.).
    // The positional value is updated by multiplying it by 2 in each iteration to reflect the next power of 2.
    // The result of each multiplication is added to the cumulative decimal equivalent.
    // This approach efficiently converts the binary number to decimal using basic arithmetic operations.

    // Convert binary number to decimal equivalent
    while (binaryNumber != 0)
    {
        remainder = binaryNumber % 10;
        decimalEquivalent += remainder * positionalValue;
        positionalValue *= 2;
        binaryNumber /= 10;
    }

    cout << "The decimal equivalent of the binary number is: " << decimalEquivalent << endl;

    return 0;
}
