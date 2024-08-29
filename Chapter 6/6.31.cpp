
// 6.31 (Greatest Common Divisor)

// Solution:


#include <iostream>
using namespace std;

// Function to calculate the Greatest Common Divisor (GCD) using the subtraction method
int gcd(int num1, int num2);

int main()
{
    int number1, number2;

    cout << "Enter two numbers separated by a space: ";
    cin >> number1 >> number2;

    cout << "The Greatest Common Divisor is: " << gcd(number1, number2);

    return 0;
}

int gcd(int num1, int num2)
{
    // Loop until one of the numbers becomes zero
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 - num2; // Subtract the smaller number from the larger number
        else
            num2 = num2 - num1; // Subtract the smaller number from the larger number
    }

    // Return the non-zero number as the GCD
    return (num1 == 0) ? num2 : num1;
}

