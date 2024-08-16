// (Factorials)
// The factorial function is used frequently in probability problems. Using the definition of factorial in Exercise 4.34,
// write a program that uses a for statement to evaluate the factorials of the integers from 1 to 5.
// Print the results in tabular format. What difficulty might prevent you from calculating the factorial of 20


// Answer:

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int factorial;

    // Print header for the table
    cout << "Num" << setw(15) << "Factorial" << endl;

    // Loop through numbers from 1 to 5 to calculate their factorial
    for (int counter = 1; counter <= 5; ++counter) {
        factorial = 1; // Reset factorial for each number

        // Calculate the factorial of the current number
        for (int i = counter; i >= 1; --i) {
            factorial *= i;
        }

        // Print the number and its factorial
        cout << setw(3) << counter << setw(15) << factorial << endl;
    }

    return 0;
}
