// (Calculating pi)



// Answer:
#include <iostream>
using namespace std;

int main()
{
    double pi = 4.0;  // Initial value of pi as per the series
    int n = 3;        // Start with the denominator 3 for the series
    int sign = -1;    // To alternate the sign of each term in the series

    for (int counter = 1; counter <= 1000; counter++)
    {
        // Apply the formula to calculate pi:
        // The sign alternates between positive and negative for each term.
        // 4.0 ensures the calculation remains in floating-point arithmetic.
        pi += sign * (4.0 / n);

        n += 2;       // Increment the denominator by 2 for the next term
        sign *= -1;   // Alternate the sign for the next term
    }

    // Print the final value of pi after 1000 terms
    cout << "pi: \t \t" << pi;
}
