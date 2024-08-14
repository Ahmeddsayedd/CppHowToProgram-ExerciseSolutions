#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(int balance)
{
    // Perform instructor value validation here.

    if (balance<0)
    {
        balance = 0;
        cerr << "Initial Balance Invalid";
    }
    else
    {
        AccBalance = balance;
    }

}

void Account::Credit (int amount)
{
    AccBalance=AccBalance+amount;
}

void Account::Debit (int amount)
{
    if (amount>AccBalance)
    {
        cout << "Debit amount exceeded account balance";
    }
    else
    {
        AccBalance=AccBalance-amount;
    }
}

int Account::getBalance()
{
    return AccBalance;
}
