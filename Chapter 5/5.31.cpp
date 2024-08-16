
// (Tax Plan Alternatives; The “FairTax”)



// Answer:

#include <iostream>
using namespace std;

int main()
{
    double expenses, Tax = 0, rate = 0.23;

    // Loop through 7 categories of annual expenses
    for (int counter = 1; counter <= 7; counter++)
    {
        cout << "Enter your annual expenses in ";

        // Use switch statement to prompt user based on the current counter value
        switch (counter)
        {
        case 1:
            cout << "Housing: ";
            cin >> expenses;
            break;
        case 2:
            cout << "Food: ";
            cin >> expenses;
            break;
        case 3:
            cout << "Clothing: ";
            cin >> expenses;
            break;
        case 4:
            cout << "Transportation: ";
            cin >> expenses;
            break;
        case 5:
            cout << "Education: ";
            cin >> expenses;
            break;
        case 6:
            cout << "Health care: ";
            cin >> expenses;
            break;
        case 7:
            cout << "Vacations: ";
            cin >> expenses;
            break;
        }

        // Calculate tax based on expenses and rate
        Tax += expenses * rate;
    }

    // Display the calculated Fair Tax
    cout << "Your Fair Tax is: " << Tax;

    return 0;
}



// Note: This code demonstrates an effective algorithm by combining a loop with a switch statement.
// The loop iterates through each expense category, while the switch statement handles different
// categories based on the value of `counter`. This method efficiently prompts the user for various
// expense inputs, reduces code redundancy, and enhances readability by consolidating multiple
// prompts into a single loop structure.

