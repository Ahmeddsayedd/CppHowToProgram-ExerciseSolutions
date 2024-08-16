// Bar Chart
// One interesting application of computers is drawing graphs and bar charts. Write a program that reads five numbers (each between 1 and 30).
// Assume that the user enters only valid values. For each number that is read, your program should print a line containing that number of
// adjacent asterisks. For example, if your program reads the number 7, it should print *******.

// Answer:

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter 5 integers between 1 and 30 separated by space: ";

    for (int counter1 = 1; counter1 <= 5; counter1++) {
        cin >> num;

        for (int counter2 = 1; counter2 <= num; counter2++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

