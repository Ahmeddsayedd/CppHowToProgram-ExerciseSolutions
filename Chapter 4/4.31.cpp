// What’s wrong with the following statement? Provide the correct statement to accomplish
// what the programmer was probably trying to do.
//   cout << ++( x + y );

// You cannot directly increment a temporary value like x + y because it’s not a modifiable variable.
// To achieve the desired result, you need to increment x first and then perform the addition with y, like this:

//      cout << (++x + y);


