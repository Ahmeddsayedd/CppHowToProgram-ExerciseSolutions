
// 5.4

// a)
// Errors:
// The for loop syntax is incorrect. The loop components (initialization, condition, and increment) should be separated by semicolons (;) rather than commas (,).
// The condition x >= 1 is not appropriate for an increasing loop because x will continue to increase, meaning the loop will never terminate.

// Correction:
// for (unsigned int x = 100; x >= 1; --x)
//    cout << x << endl;



// b)
// Errors:
// The switch statement is missing a break; statement after each case. Without break, the code will "fall through" and execute all cases, regardless of the matching case.
// The code will print both "Even integer" and "Odd integer" for any value.

// Correction:
// switch (value % 2)
//{
//    case 0:
//        cout << "Even integer" << endl;
//        break;
//    case 1:
//        cout << "Odd integer" << endl;
//        break;
//}



// c)
// Errors:
// The loop condition x >= 1 will always be true since x is incrementing by 2, which means the loop will result in an infinite loop.

// Correction:
// for (unsigned int x = 19; x >= 1; x -= 2)
//    cout << x << endl;



// d)
// Errors:
// The while loop condition is incorrectly capitalized as While. It should be lowercase while.
// The condition counter < 100 will miss printing the number 100.

// Correction:
// unsigned int counter = 2;
//do
//{
//    cout << counter << endl;
//    counter += 2;
//} while (counter <= 100);


