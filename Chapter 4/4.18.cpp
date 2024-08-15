// (Tabular Output)
// Write a C++ program that uses a while statement and the tab escape sequence \t to print the following table of values:


// Answer:

#include <iostream>
using namespace std;
int main ()
{
    int N=1;

    cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N" << endl << endl;
    while (N<=5)
    {
        cout << N << "\t" << N*10 << "\t" << N*100 << "\t" << N*1000 << endl;
        N++;
    }

    return 0;
}
