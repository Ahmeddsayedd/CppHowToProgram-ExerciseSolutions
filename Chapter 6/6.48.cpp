
// 6.48 (Craps Game Modification)

// Solution:

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Declare the Status enum globally so that all functions can access it
enum Status { Continue, Won, Loss };

unsigned int rollDice();
void handleWager(int wager, Status gameStatus, int &bankBalance);

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    unsigned int sum = rollDice();
    unsigned int myPoint = 0;
    int bankBalance = 1000, wager;

    Status gameStatus;

    do
    {
        cout << "Enter a wager: ";
        cin >> wager;
        if (wager > bankBalance)
            cout << "Wager exceeds bank balance. Try again." << endl;
    } while (wager <= 0 || wager > bankBalance);

    switch (sum)
    {
        case 7:
        case 11:
            gameStatus = Won;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Loss;
            break;
        default:
            gameStatus = Continue;
            myPoint = sum;
            cout << "Point is: " << myPoint << endl;
            break;
    }

    while (gameStatus == Continue)
    {
        sum = rollDice();
        if (sum == myPoint)
        {
            gameStatus = Won;
        }
        else if (sum == 7)
        {
            gameStatus = Loss;
        }
    }

    if (gameStatus == Won)
        cout << "Player wins!" << endl;
    else
        cout << "Player loses." << endl;

    handleWager(wager, gameStatus, bankBalance);

    cout << "The new bank balance is: $" << bankBalance << endl;

    if (bankBalance >= 2000)
        cout << "You're up big! Now's the time to cash in your chips!" << endl;
    else if (bankBalance < 1000 && bankBalance > 0)
        cout << "Oh, you're going for broke, huh?" << endl;
    else if (bankBalance < 2000 && bankBalance >= 1000)
        cout << "Aw c'mon, take a chance!" << endl;
    else if (bankBalance <= 0)
        cout << "Sorry. You busted!" << endl;


    return 0;
}

unsigned int rollDice()
{
    unsigned int roll1 = 1 + rand() % 6;
    unsigned int roll2 = 1 + rand() % 6;

    int sumOfRolls = roll1 + roll2;

    cout << "Player rolled " << roll1 << " and " << roll2 << ", sum is: " << sumOfRolls << endl;

    return sumOfRolls;
}

void handleWager(int wager, Status gameStatus, int &bankBalance)
{
    if (gameStatus == Won)
    {
        bankBalance += wager;
    }
    else if (gameStatus == Loss)
    {
        bankBalance -= wager;
    }
}



// NOTES:
/*
    We pass bankBalance by reference (using int &bankBalance) because we need to directly modify
    the bankBalance variable defined in the main function. This is crucial because updating the
    existing bankBalance in the main function allows us to accurately reflect the player's financial
    status and print various messages that add "chatter" to the game, enhancing the player's experience
    after each round.

    If we passed bankBalance by value, the function would only modify a copy of the bankBalance,
    leaving the original value in the main function unchanged. This would result in incorrect or
    outdated messages being displayed, as the main function would still be using the old bankBalance
    value, failing to show the actual impact of the player's wins or losses.
    */

