
// (Facebook User Base Growth)



// Answer:


#include <iostream>
using namespace std;

int main()
{
    int month, fM, year;
    double rate, users;

    // Iterate over different growth rates from 2% to 5%
    for (rate = 0.02; rate <= 0.05; rate += 0.01)
    {
        users = 1.0; // Initialize users to 1 billion
        year = 2012; // Reset year for each rate
        month = 10;  // Start from October

        // Calculate the number of months needed to reach 2.5 billion users
        while (users < 2.5)
        {
            users += (1.0 * rate); // Increase users based on the current rate
            month++;

            // Update the year and adjust the month if necessary
            if (month % 12 == 0)
            {
                year++;
                fM = 12; // Set fM to December for months exactly divisible by 12
            }
            else
            {
                fM = month % 12; // Calculate the month within the year
                if (fM == 0) fM = 12; // Adjust fM to ensure it is not zero

                // Note: The `month % 12` operation can yield `0` when `month` is a multiple of `12`, which does not correspond
                // to a valid month. To correct this, we adjust `fM` to `12` when `month % 12` is `0`. This ensures that
                // December is correctly displayed as `12` instead of `0`, providing accurate month representation in the output.
            }
        }

        // Output the results for the current rate
        cout << "Users reached 2.5 billion in Month: " << fM
             << " Year: " << year
             << " at the rate: " << rate * 100 << "%" << endl;
    }

    return 0;
}
