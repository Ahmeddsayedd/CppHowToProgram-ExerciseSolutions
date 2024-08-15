// (Find the Largest)
// The process of finding the largest number (i.e., the maximum of a group of numbers) is used frequently in computer applications.
// For example, a program that determines the winner of a sales contest inputs the number of units sold by each salesperson.
// The salesperson who sells the most units wins the contest. Write a C++ program that uses a while statement to determine and print
// the largest number of 10 numbers input by the user. Your program should use three variables, as follows:
// counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed).
// number: The current number input to the program.
// largest: The largest number found so far.



// Answer:

#include <iostream>
using namespace std;

int main() {
    int num, largest, counter = 1;

    // Prompt for the first number and initialize 'largest' with this number.
    // This initialization is crucial because it provides a starting point for comparison.
    // If 'largest' were not initialized before entering the loop, we would have no reference number to compare with,
    // potentially leading to incorrect results as the program would not have a valid initial value for comparison.
    cout << "Enter number: ";
    cin >> num;
    largest = num;

    // Loop to input 9 more numbers and determine the largest number.
    // We start with 'counter' at 1 because we have already processed the first number before the loop.
    // Hence, we only need to loop 9 times to process the remaining 9 numbers.
    while (counter <= 9) {
        cout << "Enter number: ";
        cin >> num;
        if (num > largest) {
            largest = num; // Update 'largest' if the current number is greater.
        }
        counter++;
    }

    cout << "The largest number is: " << largest;

    return 0;
}
