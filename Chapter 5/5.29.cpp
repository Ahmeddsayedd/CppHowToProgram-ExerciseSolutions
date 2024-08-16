
// (Peter Minuit Problem)



// Answer:

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double startAmount = 24.0, endAmount, rate;

    // Print header for the table of year, rate, and amount on deposit
    cout << "Year" << setw(12) << "Rate" << setw(35) << "Amount on Deposit" << endl;


    cout << fixed << setprecision(2);

    // Loop through interest rates from 5% to 10%
    for (int i = 5; i <= 10; i++)
    {
        rate = i / 100.0;  // Convert the rate percentage to a decimal

        // Print the results for each year from 1 to 387
        for (unsigned int year = 1; year <= 387; year++)
        {
            endAmount = startAmount * pow(1.0 + rate, year);
            cout << setw(4) << year << setw(12) << rate << setw(35) << endAmount << endl;
        }

        // Print a separator if not the last rate
        if (i != 10)
            cout << "FOR THE NEW RATE: " << endl << endl;
    }

    return 0;
}
