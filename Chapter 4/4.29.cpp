// (Multiples of 2 with an Infinite Loop)
// Write a program that prints the powers of the integer 2, namely 2, 4, 8, 16, 32, 64, etc. Your while loop should not terminate
// (i.e., you should create an infinite loop). To do this, simply use the keyword true as the expression for the while statement.
// What happens when you run this program?


// Answer:
// WARNING: This program contains an infinite loop and will continuously print powers of 2.

#include <iostream>
using namespace std;

int main()
{
    int powerOfTwo = 2;

    while (true)
    {
        cout << powerOfTwo << endl;
        powerOfTwo *= 2;
    }

    return 0;
}


// When you run this program, it will keep printing the powers of 2—like 2, 4, 8, 16, and so on—over and over again.
// The loop is set to run forever, so the program will keep generating these numbers indefinitely without stopping.
// Since it’s an infinite loop, you’ll need to stop the program manually. You can usually do this by pressing `Ctrl + C`
// in your command line or terminal. If you don’t stop it, the program will continue running,
// using up computer resources and potentially making your system unresponsive.
