// (Number Systems Table)
// Write a program that prints a table of the binary, octal, and hexadecimal equivalents of the decimal numbers in the range 1–256.
// If you are not familiar with these number systems, read Appendix D.
// [Hint: You can use the stream manipulators dec, oct, and hex to display integers in decimal, octal, and hexadecimal formats, respectively.]



// Answer:

// Stream manipulators (oct, dec, hex) to convert decimal to every other number system directly.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Print table headers with appropriate column widths
    cout << "Decimal" << setw(15) << "Binary"
         << setw(10) << "Octal"
         << setw(15) << "Hexadecimal" << endl;

    // Iterate through the range of decimal numbers from 1 to 256
    for (int counter = 1; counter <= 256; counter++)
    {
        int binary = 0;  // Variable to hold the binary representation
        int place = 1;   // Variable to keep track of the current place value in binary
        int num = counter; // Use num to avoid altering the counter during conversion

        // Convert decimal number to binary
        while (num > 0)
        {
            int remainder = num % 2;
            binary += remainder * place;
            place *= 10;
            num /= 2;
        }

        // Print the decimal, binary, octal, and hexadecimal representations
        // Set column widths MAX: Decimal (3 digits), Binary (9 digits), Octal (3 digits), Hexadecimal (2 digits)
        cout << setw(7) << dec << counter
             << setw(15) << binary
             << setw(10) << oct << counter
             << setw(15) << hex << counter << endl;
    }

    return 0;
}
