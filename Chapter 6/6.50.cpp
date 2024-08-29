
// 6.50 (Pass-by-Value vs. Pass-by-Reference)

// Solution:

#include <iostream>
using namespace std;

int tripleByValue(int count);
void tripleByReference(int &count);

int main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    cout << "Triple the number by value: " << tripleByValue(num) << endl;

    tripleByReference(num);
    cout << "Triple the number by Reference: " << num << endl;

    return 0;
}

int tripleByValue(int count)
{
    return count * 3;
}

void tripleByReference(int &count)
{
    count *= 3;
}
