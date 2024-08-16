
// (Removing break and continue)



// Answer:

#include <iostream>
using namespace std;

int main()
{
    unsigned int count, num;

    for (count = 1; count <= 10; ++count)
    {
        if (count == 5)
        {
            num = count; // Store the value of count when it equals 5
            count = 11;  // Exit the loop by setting count to a value greater than 10
        }
        else
        {
            cout << count << " "; // Print the current value of count
        }
    }

    cout << "\nBroke out of loop at count = " << num << endl;

    return 0;
}


// This is another approach to achieve the same functionality as the previous code.
// Instead of using a direct value assignment to break out of the loop, we use a boolean flag
// (`earlyExit`) to control the loop's execution and exit condition more cleanly.


/*


#include <iostream>
using namespace std;

int main()
{
    unsigned int count, num;
    bool earlyExit = false; // Flag to indicate if we need to exit the loop early

    // This is another approach to break out of the loop when count equals 5
    for (count = 1; count <= 10 && !earlyExit; ++count)
    {
        if (count == 5)
        {
            num = count;      // Store the value of count when it equals 5
            earlyExit = true; // Set the flag to exit the loop
        }
        else
        {
            cout << count << " "; // Print the current value of count
        }
    }

    cout << "\nBroke out of loop at count = " << num << endl;

    return 0;
}


*/


