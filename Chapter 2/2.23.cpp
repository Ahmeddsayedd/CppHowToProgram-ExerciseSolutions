// 2.23

// (Largest and Smallest Integers)
// Write a program that reads in five integers and determines and prints the largest and the smallest integers in the group.
// Use only the programming techniques you learned in this chapter.

#include <iostream>
using namespace std;
int main ()
{
    int num1, num2, num3, num4, num5, largest, smallest;

    cout << "Enter 5 integers separated by a space: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    largest = smallest = num1;

    if (num2>largest)
        largest = num2;
    if (num3>largest)
        largest = num3;
    if (num4>largest)
        largest = num4;
    if (num5>largest)
        largest = num5;

    cout << "The largest is: " << largest << "\n";

    if (num2<smallest)
        smallest = num2;
    if (num3<smallest)
        smallest= num3;
    if (num4<smallest)
        smallest = num4;
    if (num5<smallest)
        smallest = num5;

    cout << "The smallest is: " << smallest<< "\n";


    // Note: The use of the logical AND (&&) operator is not covered in this chapter.
    // Therefore, we will use an alternative method to determine the largest and smallest numbers
    // using only single if statement, as per the constraints of this chapter.


    return 0;
}

