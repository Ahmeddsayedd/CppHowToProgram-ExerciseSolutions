
// 6.41 (Recursive Greatest Common Divisor)

// Solution:


#include <iostream>
using namespace std;

int gcd(int x, int y); // Function prototype to calculate the GCD of two integers

int main()
{
    int num1, num2;
    cout << "Enter two numbers separated by a space to find their GCD: ";
    cin >> num1 >> num2;

    cout << "The GCD is: " << gcd(num1, num2) << endl; // Calling the gcd function and displaying the result

    return 0;
}

int gcd(int x, int y)
{
    // The function calculates the GCD (Greatest Common Divisor) of two numbers using recursion.
    // It first checks if x is greater than y, then swaps the order of the parameters to maintain the correct logic.

    if (x > y) // If x is greater than y
    {
        if (y == 0) // Base case: if y becomes 0, the GCD is x
            return x;
        else
            // Recursive case: call gcd with y and x % y to continue the Euclidean algorithm
            return gcd(y, x % y);
    }
    else // If y is greater than or equal to x
    {
        if (x == 0) // Base case: if x becomes 0, the GCD is y
            return y;
        else
            // Recursive case: call gcd with y % x and x, maintaining the Euclidean algorithm
            return gcd(y % x, x);
    }
}
