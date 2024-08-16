//  (Product of Odd Integers) Write a program that uses a for statement to calculate and print the product of the odd integers from 1 to 15.


// Answer:

#include <iostream>
using namespace std;

int main() {
    int product = 1;

    // Loop to multiply odd numbers from 1 to 15
    for (unsigned int counter = 1; counter <= 15; counter += 2) {
        product *= counter;
    }

    cout << "The product is: " << product << endl;

    return 0;
}
