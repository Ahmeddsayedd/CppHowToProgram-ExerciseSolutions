// (Compound Interest Calculation)
// Modify Fig. 5.6 so it uses only integers to calculate the compound interest.
// [Hint: Treat all monetary amounts as numbers of pennies. Then, “break” the result into its dollar and cents
// portions by using the division and modulus operations. Insert a period.]





// Answer:
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long startAmount = 100000, endAmount, rate = 5;
    int dollars, cents;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    cout << fixed << setprecision(2);

    for (unsigned int year = 1; year <= 10; year++)
    {
        // We start with an initial amount of 100000 pennies (equivalent to $1000.00).
        // Using pennies allows us to perform all calculations using integer arithmetic,
        // which is necessary because we cannot use floating-point arithmetic or the pow() function.
        endAmount = startAmount * (100 + rate) / 100;
        startAmount = endAmount;  // Update startAmount for the next year's calculation.

        // Convert the total amount from pennies to dollars and cents.
        dollars = endAmount / 100;  // Divide by 100 to get the dollar part.
        cents = endAmount % 100;    // Use modulo 100 to get the remaining cents.

        cout << setw(4) << year
             << setw(18) << dollars << "." << cents << endl;
    }

    return 0;
}
