
// 6.29 (Prime Numbers)

// Solution:

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num);

int main()
{
    cout << "Prime Numbers: " << endl;

    for (int counter = 2; counter <= 10000; counter++)
    {
        if (isPrime(counter))
            cout << counter << endl;
    }

    return 0;
}

bool isPrime(int num)
{
    if (num <= 1)
        return false; // 1 and numbers less than 1 are not prime numbers
    if (num == 2)
        return true; // 2 is the only even prime number

    if (num % 2 == 0)
        return false; // All other even numbers are not prime

    // To determine if num is prime, we only need to check divisibility up to sqrt(num).
    // If num has a factor larger than its square root, then it must have a corresponding factor
    // smaller than its square root (since a * b = num). Therefore, no need to check beyond sqrt(num).
    for (int counter = 3; counter <= sqrt(num); counter += 2)
    {
        if (num % counter == 0)
            return false; // num is divisible by counter, so it's not prime
    }

    return true; // num has no divisors up to its square root, so it is prime
}



// b)
// We only need to check divisors up to sqrt(10000) which is 100. This means that instead of checking all numbers from 2 to 9999, you only need to check from 2 to 100.

// c)
// If a number n isn’t prime, it can be factored into two numbers, a and b, such that n = a * b.
// If both a and b were greater than the square root of n, their product would be larger than n,
// which doesn’t make sense because we started with n. So, at least one of these numbers has to
// be smaller than or equal to the square root of n. That’s why it’s enough to check divisibility
// only up to the square root.
