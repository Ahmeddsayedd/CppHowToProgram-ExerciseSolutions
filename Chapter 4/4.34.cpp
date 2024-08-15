// (Factorial)
// The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined as follows:
// n! = n · (n– 1) · (n– 2) · … · 1 (for values of n greater than 1) and n! = 1 (for n = 0 or n = 1).
// For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
// Use while statements in each of the following:
// a) Write a program that reads a nonnegative integer and computes and prints its factorial.
// b) Write a program that estimates the value of the mathematical constant e
// c) Write a program that computes the value of e^x



// Answer:


#include <iostream>
using namespace std;

int main() {
    int num, factorial, accuracy, X;
    double e = 1.0, term = 1.0, termforx = 1.0, resultx = 1.0;

    // Part (a): Compute and print the factorial of a nonnegative integer
    cout << "Enter nonnegative integer: ";
    cin >> num;
    if (num >= 0) {
        factorial = 1;
        int tempNum = num;  // Use a temporary variable to compute factorial
        while (tempNum > 0) {
            factorial *= tempNum;
            tempNum--;
        }
        cout << "The factorial is: " << factorial << endl << endl;
    } else {
        cout << "Invalid Entry" << endl;
    }

    // Part (b): Estimate the value of the mathematical constant e
    if (num >= 0) {  // Only proceed if a valid nonnegative integer was entered
        cout << "Enter the desired accuracy term for the mathematical constant e: ";
        cin >> accuracy;

        term = 1.0;  // Start with term 1 (1/0!)
        int i = 1;   // Start with 1 to avoid division by zero
        while (i < accuracy) {
            term = term / i;
            e = e + term;
            i++;
        }
        cout << "The mathematical constant e is approximately: " << e << endl;
    }

    // Part (c): Compute the value of e^x
    if (num >= 0) {  // Only proceed if a valid nonnegative integer was entered
        cout << "Enter the desired accuracy term for the mathematical expression e^x: ";
        cin >> accuracy;

        cout << "Enter the value of X: ";
        cin >> X;

        termforx = 1.0;  // Start with term 1 (x^0 / 0!)
        resultx = 1.0;   // Initialize resultx to 1.0 (x^0)
        int i = 1;       // Start with 1 to avoid division by zero
        while (i < accuracy) {
            termforx = termforx * (static_cast<double>(X) / i);  // Compute each term x^i / i!
            //Use static_cast<double> to ensure accurate division in term calculation (implicit conversion may lead to incorrect results)
            resultx = resultx + termforx;
            i++;
        }
        cout << "The value of e^" << X << " is approximately: " << resultx << endl;
    }

    return 0;
}

