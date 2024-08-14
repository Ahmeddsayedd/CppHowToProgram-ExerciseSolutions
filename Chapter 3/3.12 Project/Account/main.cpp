#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    int initial_1, initial_2;
    cout << "Enter initial balance for object 1: ";
    cin >> initial_1;
    cout << "Enter initial balance for object 2: ";
    cin >> initial_2;

    Account account1 (initial_1);
    Account account2 (initial_2);

    account1.Credit(250);
    account2.Credit(0);

    account1.Debit(2000);
    account2.Debit(100);

    cout << "The Balance of\nAccount 1: " << account1.getBalance() << "\nAccount 2: " << account2.getBalance();
    return 0;
}
