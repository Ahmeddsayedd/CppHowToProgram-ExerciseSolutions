
// 6.15 (Short Answer Questions)

// Solution:

// a) Choosing numbers “at random” means selecting numbers in a way that each number has an equal chance of being chosen, without any predictable pattern.

// b) The rand function is useful for simulating games of chance because it generates random numbers that can mimic unpredictable outcomes, like rolling dice or drawing cards.

// c) Randomizing a program with srand sets a seed for the random number generator, ensuring that the sequence of random numbers differs each time the program runs.
// It’s undesirable to randomize if you need consistent results for testing or debugging.

// d) Scaling or shifting values produced by rand is often necessary to fit the random numbers into a specific range or format,
// such as generating a random number between 1 and 100 instead of the default range.

// e) Computerized simulation of real-world situations is useful because it allows testing and analyzing complex scenarios in a controlled environment,
// which can be more practical and cost-effective than experimenting in real life.



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 6.16 (Random Numbers)

// solution:

// a) unsigned int n = 1 + rand() % 2;

// b) unsigned int n = 1 + rand() % 100;

// c) unsigned int n = rand() % 10;

// d) unsigned int n = 1000 + rand() % 113;

// e) int n = -1 + rand() % 3;

// f) int n = -3 + rand() % 15;

// NOTES:

// For ranges where the lower bound is not 0, adjust the range calculation by adding the lower bound to the result of rand() % range_size.

// The range size is calculated as upper_bound - lower_bound + 1. For example, in range (1000 to 1112), the size is 112 + 1 = 113.



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 6.17 (Random Numbers)

// Solution:

// a) cout << 2 + 2 * (rand() % 5);

// b) cout << (2* (2 + rand() % 5) - 1); OR OR OR cout << 3 + 2 * (rand() % 5);

// c) cout << 6 + 4 * (rand() % 5);

