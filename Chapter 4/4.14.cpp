//  (Credit Limits)
// Develop a C++ program that will determine whether a department-store customer has exceeded the credit limit on a charge account.
// For each customer, the following facts are available:
// a) Account number (an integer)
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit
// The program should use a while statement to input each of these facts, calculate the new balance
// (= beginning balance + charges – credits), and determine whether the new balance exceeds the customer’s credit limit.
// For those customers whose credit limit is exceeded, the program should display the customer’s account number, credit limit,
// new balance, and the message “Credit Limit Exceeded.”



// Answer:

#include <iostream>
using namespace std;

int main() {
    int accnum;
    double balance, charges, credits, creditlimit, newbalance;

    cout << "Enter account number (or -1 to quit): ";
    cin >> accnum;

    while (accnum != -1) {
        cout << "Enter beginning balance: ";
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charges;
        cout << "Enter total credits: ";
        cin >> credits;
        cout << "Enter credit limit: ";
        cin >> creditlimit;

        newbalance = balance + charges - credits;

        cout << "New balance is: " << newbalance << endl;

        if (newbalance > creditlimit) {
            cout << "Account: " << accnum << endl;
            cout << "Credit limit: " << creditlimit << endl;
            cout << "Balance: " << balance << endl;
            cout << "Credit Limit Exceeded." << endl;
        }

        cout << "Enter account number (or -1 to quit): ";
        cin >> accnum;
    }

    return 0;
}
