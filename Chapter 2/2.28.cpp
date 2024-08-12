// 2.28

//  (Digits of an Integer)
// Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each.
// [Hint: Use the integer division and modulus operators.] For example, if the user types in 42339, the program should print 4  2  3  3  9



#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout<< "Enter integer of 5 digits: ";
    cin>> num;

    // Note: The original number in the variable 'num' remains unchanged.
    // We use integer division and modulus operators to extract and print each digit.
    // - num / 10000 extracts the first digit
    // - (num / 1000) % 10 extracts the second digit
    // - (num / 100) % 10 extracts the third digit
    // - (num / 10) % 10 extracts the fourth digit
    // - num % 10 extracts the fifth digit
    // The digits are printed with three spaces between each digit.

    cout << num/10000 <<  "   " << (num/1000)%10 <<  "   " <<(num/100)%10 <<  "   " << (num/10)%10 << "   " << num%10;

    return 0;
}
