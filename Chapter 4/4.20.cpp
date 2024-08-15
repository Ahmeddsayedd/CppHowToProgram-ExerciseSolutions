// (Validating User Input)
// The examination-results program of Fig. 4.16 assumes that any value input by the user that’s not a 1 must be a 2.
// Modify the application to validate its inputs. On any input, if the value entered is other than 1 or 2,
// keep looping until the user enters a correct value.


// Answer:
#include <iostream>
using namespace std;

int main()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int studentCounter = 1;


    while (studentCounter <= 10)
    {
        int result = 0;
        int flag = 0;  // Reset flag for each new input to ensure the input validation loop runs correctly for each student.
                                // If 'flag' were a global variable instead of being reset locally, it would retain its value across iterations,
                                // potentially causing the loop to exit prematurely if it was set to 1 by a previous iteration. This could lead
                                // to incorrect input validation and results.


        // Input validation loop
        // We use a flag variable to control the loop and exit it when valid input is provided.
        // This approach is necessary because, at this stage, we have not yet covered the 'break' statement
        // or logical operators like '&&' or '||'. By using a flag, we can validate input without relying on
        // these constructs, adhering to the constraints of our current chapter.

        while (flag!=1)
        {
            cout << "Enter result (1 = pass, 2 = fail): ";
            cin >> result;

            // Check for valid input
            if (result == 1)
            {
                passes = passes + 1;
                flag=1; // exit the validation loop
            }
            else if (result == 2)
            {
                failures = failures + 1;
                flag=1; // exit the validation loop
            }
            else
            {
                cout << "Invalid input. Please enter 1 or 2." << endl;
            }
        }

        studentCounter = studentCounter + 1;
    }

    cout << "Passed " << passes << "\nFailed " << failures << endl;

    if (passes > 8)
    {
        cout << "Bonus to instructor!" << endl;
    }

    return 0;
}
