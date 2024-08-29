
// 6.36 (Recursive Exponentiation)

// Solution:

#include <iostream>
using namespace std;

long power(int base, int exponent);

int main()
{
    int B, E;

    cout << "Enter the base: ";
    cin >> B;

    cout << "Enter the exponent: ";
    cin >> E;

    cout << B << "^" << E << " = " << power(B, E);

    return 0;
}

long power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}
