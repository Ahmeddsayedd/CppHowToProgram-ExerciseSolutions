
// 6.28 (Perfect Numbers)

// Solution:


#include <iostream>
using namespace std;

bool isPerfect(int num);

int main()
{
    cout << "Perfect Numbers: " << endl;

    for (int counter = 1; counter <= 1000; counter++)
    {
        if (isPerfect(counter))
            cout << counter << endl;
    }

    return 0;
}

bool isPerfect(int num)
{
    int result = 0;
    // Iterate through all numbers less than 'num' to find its divisors
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0) // Check if 'i' is a divisor of 'num'
            result += i; // Add divisor to the result
    }
    // Check if the sum of divisors equals the original number
    return result == num;
}
