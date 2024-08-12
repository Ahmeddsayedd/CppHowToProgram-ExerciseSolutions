// 2.16

// (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two numbers from the user, and prints the sum, product, difference, and quotient of the two numbers.


#include <iostream>
using namespace std;
int main ()
{
    int num1, num2;
    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << "The sum is: " << num1+num2 << "\n";
    cout << "The product is: " << num1*num2 << "\n";
    cout << "The difference is: " << num1-num2 << "\n";
    cout << "The quotient is: " << num1/num2 << "\n";

    return 0;
}
