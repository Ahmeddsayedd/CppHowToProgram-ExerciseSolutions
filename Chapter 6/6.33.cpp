
// 6.33 (Coin Tossing)

// Solution:
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main()
{
    int tails = 0, heads = 0;

    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Simulate 100 coin tosses
    for (int i = 1; i <= 100; i++)
    {
        if (flip() == 0)
        {
            cout << "tail" << endl; // Output "tail" for a toss result of 0
            tails++;                // Increment the tails counter
        }
        else
        {
            cout << "head" << endl; // Output "head" for a toss result of 1
            heads++;                // Increment the heads counter
        }
    }

    cout << "Number of heads: " << heads << endl;
    cout << "Number of tails: " << tails << endl;

    return 0;
}

int flip()
{
    int toss = rand() % 2; // Generate a random number (0 or 1)
    return toss;
}
