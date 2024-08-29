
// 6.18 (Exponentiation)

// Solution:

#include <iostream>
using namespace std;

long integerPower(int base, unsigned int exponent);

int main()
{
    int base;
    unsigned int expo; // Exponent is unsigned int because it's assumed to be a positive, nonzero integer

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> expo;

    cout << base << "^" << expo << " = " << integerPower(base, expo) << endl;

    return 0;
}

long integerPower(int base, unsigned int exponent)
{
    long power = 1; // Using 'long' to handle potentially large results from exponentiation
    for (unsigned int counter = 1; counter <= exponent; counter++)
    {
        power *= base;
    }
    return power;
}
