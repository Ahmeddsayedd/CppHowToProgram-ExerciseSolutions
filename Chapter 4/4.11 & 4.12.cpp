
// 4.11

// a)
    // Errors:
    // 1. The semicolon ; after the if condition terminates the if statement prematurely.
    // 2. Missing closing quotation mark for the string in the second cout statement.

    // Corrected Code:
    // if (age >= 65)
    //    cout << "Age is greater than or equal to 65" << endl;
    //else
    //    cout << "Age is less than 65" << endl;


// b)
    // Errors:
    // 1. The semicolon ; after else ends the else block prematurely, making the subsequent cout statement execute independently of the if-else.

    // Corrected Code:
    // if (age >= 65)
    //    cout << "Age is greater than or equal to 65" << endl;
    // else
    //    cout << "Age is less than 65" << endl;


// c)
    // Errors:
    // 1. The variable total is declared but not initialized, leading to undefined behavior when it is first used.

    // Corrected Code:
    // unsigned int x = 1;
    // unsigned int total = 0;  // Initialize total to 0
    // while (x <= 10)
    // {
    //     total += x;
    //     ++x;
    // }


// d)
    // Errors:
    // 1. While should be lowercase while.
    // 2. The loop body should be enclosed in braces {} if it contains more than one statement, because second statement here will execute whatever the condition is true or not

    // Corrected Code:
    //    while (x <= 100)
    //{
    //    total += x;
    //    ++x;
    //}


// e)
    // Errors:
    // 1. The loop is intended to decrement y until it is no longer greater than 0, but it increments y, creating an infinite loop.

    // Corrected Code:
    //    while (y > 0)
    //{
    //    cout << y << endl;
    //    --y;  // Decrement y instead of incrementing
    //}



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 4.12

// The following program prints a vertical list of the squares of numbers from 1 to 10, followed by the total sum of these squares.

// Output:
// 1
// 4
// 9
// 16
// 25
// 36
// 49
// 64
// 81
// 100
// Total = 385



