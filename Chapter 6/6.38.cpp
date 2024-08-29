
// 6.38 (Towers of Hanoi)

// Solution:

#include <iostream>
using namespace std;

void towersOfHanoi(int num, int peg1, int peg2, int peg3);

int main()
{
    int Disks;

    cout << "Enter number of disks: ";
    cin >> Disks;

    towersOfHanoi(Disks, 1, 2, 3);
    return 0;
}

void towersOfHanoi(int num, int peg1, int peg2, int peg3)
{
    // Base case: If there's only one disk, move it directly from peg1 to peg3.
    // This is the simplest case where no intermediate steps are needed.
    if (num == 1)
    {
        cout << peg1 << " -> " << peg3 << endl;
        return;
    }

    // Recursive step: Move the top (num-1) disks from peg1 to peg2 using peg3 as a temporary peg.
    // This step assumes that you can solve a smaller version of the problem
    // (moving num-1 disks), which is the essence of recursion.
    towersOfHanoi(num - 1, peg1, peg3, peg2);

    // Move the nth (largest) disk from peg1 directly to peg3.
    // This is the main move that progresses towards solving the original problem.
    cout << peg1 << " -> " << peg3 << endl;

    // Recursive step: Move the num-1 disks from peg2 to peg3 using peg1 as a temporary peg.
    // After placing the largest disk on peg3, move the remaining num-1 disks from the temporary peg (peg2) to peg3.
    // This completes the transfer of all disks to the final destination peg3.
    towersOfHanoi(num - 1, peg2, peg1, peg3);
}
