// 2.26

// (Checkerboard Pattern)
// Display the following checkerboard pattern with eight output statements, then display the same pattern using as few statements as possible.


#include <iostream>
using namespace std;
int main() {

    // Using eight output statements:

    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";

    cout << "\n \n \n";



    // Note: This chapter does not cover the use of loops.
    // Therefore, to adhere to the chapter's constraints, we used the newline escape sequence (\n)
    // within a single statement to print the pattern with as few statements as possible.

    // Using a few statements as possible:

    cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *";

    return 0;
}

