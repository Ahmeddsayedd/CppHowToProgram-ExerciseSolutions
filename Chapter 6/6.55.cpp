
// 6.55 (C++11 Random Numbers: Modified Craps Game)

// Solution:

#include <iostream>
#include <random>
#include <ctime>
using namespace std;

default_random_engine engine (static_cast <unsigned int> (time(0)) );
uniform_int_distribution <unsigned int> RandomINT (1,6);

unsigned int rollDice();

int main()
{

    enum Status { Continue, Won, Loss };
    unsigned int sum = rollDice();
    unsigned int myPoint = 0;

    Status gameStatus;


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


    return 0;
}

unsigned int rollDice()
{
    unsigned int roll1 = RandomINT(engine);
    unsigned int roll2 = RandomINT(engine);

    int sumOfRolls = roll1 + roll2;

    cout << "Player rolled " << roll1 << " and " << roll2 << ", sum is: " << sumOfRolls << endl;

    return sumOfRolls;
}

