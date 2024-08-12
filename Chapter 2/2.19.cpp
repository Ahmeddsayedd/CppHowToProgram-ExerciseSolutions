// 2.19

// (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest, and largest of these numbers.
// The screen dialog should appear as follows:
// Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27


#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, smallest, largest;

    cout << "Enter three integers separated by a space: ";
    cin >> num1 >> num2 >> num3;

    cout << "Sum is: " << num1 + num2 + num3 << "\n";
    cout << "Average is: " << (num1 + num2 + num3) / 3 << "\n";
    cout << "Product is: " << num1 * num2 * num3 << "\n";


    // Note: The use of the logical AND (&&) operator is not covered in this chapter.
    // Therefore, we will use an alternative method to determine the largest and smallest numbers
    // using only single if statement, as per the constraints of this chapter.

    // Determine the largest number
    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    // Determine the smallest number
    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }


    cout << "Smallest is: " << smallest << "\n";
    cout << "Largest is: " << largest << "\n";

    return 0;
}
