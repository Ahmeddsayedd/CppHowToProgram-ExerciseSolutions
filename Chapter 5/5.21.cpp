
// (Calculating Salaries)



// Answer:

#include <iostream>

using namespace std;

int main()
{
    int payCode, hours, extra, items;
    double weekS, hourlyW, wSales, itemM;

    do {

        cout << "Enter your Pay Code (-1 to exit): ";
        cin >> payCode;

        if (payCode == -1)
            break;

        switch (payCode)
        {
        case 1:
            // Weekly salary for pay code 1
            cout << "Enter your weekly salary: ";
            cin >> weekS;
            break;

        case 2:
            // Hourly wage calculation for pay code 2
            cout << "Enter your hourly wage: ";
            cin >> hourlyW;
            cout << "Enter number of hours: ";
            cin >> hours;
            if (hours <= 40)
            {
                weekS = hours * hourlyW;
            }
            else
            {
                extra = hours - 40; // Calculate overtime hours
                weekS = 40 * hourlyW + 1.5 * extra * hourlyW;
            }
            break;

        case 3:
            // Commission-based salary for pay code 3
            cout << "Enter your gross weekly sales: ";
            cin >> wSales;
            weekS = 250 + wSales * 0.057;
            break;

        case 4:
            // Item-based production salary for pay code 4
            cout << "Enter how many items you produced: ";
            cin >> items;
            cout << "Enter how much money you get per item: ";
            cin >> itemM;
            weekS = itemM * items;
            break;

        default:
            // Handle invalid pay codes
            cout << "Invalid entry, Try again with a number between 1 and 4" << endl;
        }

        cout << "Your weekly salary is: " << weekS << endl;
    } while (payCode != -1);

    return 0;
}
