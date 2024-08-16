// (Compound Interest)
// Modify the compound interest program of Section 5.4 to repeat its steps for the interest rates 5%, 6%, 7%, 8%, 9% and 10%.
// Use a for statement to vary the interest rate.

// Answer:


#include <iostream>
#include <iomanip>
#include <cmath> // For the pow() function

using namespace std;

int main() {
    double startAmount = 1000.0, endAmount, rate = 0.05;

    // Print the table header
    cout << "Year" << setw(8) << "Rate" << setw(21) << "Amount on deposit" << endl;

    // Set the precision to 2 decimal places for all subsequent outputs
    cout << fixed << setprecision(2);

    // Loop through interest rates from 0.05 to 0.10 in increments of 0.01
    for (rate = 0.05; rate <= 0.10; rate += 0.01) {
        // Loop through years from 1 to 10
        for (unsigned int year = 1; year <= 10; year++) {
            // Calculate the end amount using the compound interest formula
            endAmount = startAmount * pow(1.0 + rate, year);

            // Print the year, rate, and amount on deposit
            cout << setw(4) << year << setw(8) << rate << setw(21) << endAmount << endl;
            // setw(4) ensures the year is printed with a minimum width of 4 characters,
            // adding spaces if necessary. For year values less than 10, 3 spaces are added,
            // and for year values of 10 or more, 2 spaces are added to align the columns properly.
        }
        cout << "\n \n \n \n";
    }

    return 0;
}


