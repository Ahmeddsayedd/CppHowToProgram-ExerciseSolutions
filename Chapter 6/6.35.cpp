
// 6.35 (Guess-the-Number Game Modification)

// Solution:

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototype for Guess
int Guess();

int main()
{
    int G, number, counter;
    char Again;

    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    do
    {
        cout << "I have a number between 1 and 1000.\nCan you guess my number?";
        cout << " Please type your first guess: ";
        number = Guess();

        counter = 0; // Reset counter for every game

        // Nested loops: The outer loop repeats the game if the player wants to play again.
        // The inner loop continues to prompt the player until the correct number is guessed.
        while (true)
        {
            cin >> G;
            if (G == number)
            {
                cout << "Excellent! You guessed the number!\n";
                break;
            }
            else if (G > number)
            {
                cout << "Too high. Try again.";
                counter++;
            }
            else if (G < number)
            {
                cout << "Too low. Try again.";
                counter++;
            }
        }

        // Provide feedback based on the number of guesses
        if (counter < 10)
            cout << "Either you know the secret or you got lucky!\n";
        else if (counter == 10)
            cout << "Ahah! You know the secret!\n";
        else
            cout << "You should be able to do better!\n";

        cout << "Would you like to play again (y or n)? ";
        cin >> Again;

    } while (Again == 'Y' || Again == 'y'); // The do-while loop ensures the game is played at least once and allows replay.

    return 0;
}

// Function definition for Guess
int Guess()
{
    return 1 + rand() % 1000; // Generate a random number between 1 and 1000
}


