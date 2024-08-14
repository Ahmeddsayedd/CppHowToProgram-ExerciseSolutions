#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date1 (14,8,2024);

    cout << "The initial Date is: ";
    date1.DisplayDate(); // DisplayDate is a void function, so it cannot be used directly within cout.
    cout << endl;

    // Update Date using Set Function.

    date1.setDay(13);
    date1.setMonth(11);
    date1.setYear(2004);

    cout << "The updated date is: ";
    date1.DisplayDate();

    return 0;
}
