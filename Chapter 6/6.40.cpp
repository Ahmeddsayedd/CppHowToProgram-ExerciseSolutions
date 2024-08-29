
// 6.40 (Visualizing Recursion)

// Solution:


#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long number, int depth = 0); // Default depth parameter added

int main()
{
    for (unsigned int counter = 0; counter <= 10; ++counter)
    {
        cout << setw(2) << counter << "! = " << factorial(counter) << "\n\n\n\n\n";
    }

    return 0;
}

unsigned long factorial(unsigned long number, int depth)
{
    // Display the current level of recursion with indentation
    cout << setw(depth * 4) << "" << "factorial(" << number << ")" << endl;

    if (number <= 1) // Base case
    {
        cout << setw(depth * 4) << "" << "Return 1 (base case)" << endl;
        return 1;
    }
    else // Recursive case
    {
        cout << setw(depth * 4) << "" << number << " * factorial(" << number - 1 << ")" << endl;
        unsigned long result = number * factorial(number - 1, depth + 1);
        cout << setw(depth * 4) << "" << "Return " << result << endl;
        return result;
    }
}
