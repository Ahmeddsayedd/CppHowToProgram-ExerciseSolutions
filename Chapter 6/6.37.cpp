
// 6.37 (FibonacciSeries: Iterative Solution)

// Solution:

#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long number);

int main()
{
    // Calculate and display Fibonacci values from 0 through 10
    for (unsigned int counter = 0; counter <= 10; counter++)
    {
        cout << "fibonacci(" << counter << ") = " << fibonacci(counter) << endl;
    }

    // Display higher Fibonacci values
    cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
    cout << "fibonacci(30) = " << fibonacci(30) << endl;
    cout << "fibonacci(35) = " << fibonacci(35) << endl;

    return 0;
}

unsigned long fibonacci(unsigned long number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;

    unsigned long fib_prev = 0;
    unsigned long fib_next = 1;
    unsigned long result;

    // Start loop from 2 because the first two Fibonacci numbers (0 and 1) are handled outside the loop.
    // If the loop starts from 1, it will incorrectly calculate fib(2) as 2 instead of 1,
    // leading to an incorrect Fibonacci series.
    for (unsigned long counter = 2; counter <= number; counter++)
    {
        result = fib_prev + fib_next;
        fib_prev = fib_next;
        fib_next = result;
    }

    return result;
}
