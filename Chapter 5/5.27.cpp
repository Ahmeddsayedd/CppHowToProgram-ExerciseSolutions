
// (Removing the continue Statement)



// Answer:

#include <iostream>
using namespace std;

int main()
{
    unsigned int count;

    // Iterate from 1 to 10
    for (count = 1; count <= 10; ++count)
    {
        // Skip printing the number 5
        if (count != 5)
        {
            cout << count << " ";
        }
    }

    cout << "\nUsed continue to skip printing 5" << endl;

    return 0;
}

