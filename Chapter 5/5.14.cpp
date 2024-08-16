// (Calculating Total Sales)
// A mail order house sells five different products whose retail prices are:
//Product 1 — $2.98
//Product 2 — $4.50
//Product 3 — $9.98
//Product 4 — $4.49
//Product 5 — $6.87
// Write a program that reads a series of pairs of numbers as follows:
//a) Product number
//b) Quantity sold
//Your program should use a switch statement to determine the retail price for each product.
//Your program should calculate and display the total retail value of all products sold.
//Use a sentinel-controlled loop to determine when the program should stop looping and display the final results.




// Answer:

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pNum, Qsold;
    double Rprice, Tsold = 0.0;

    cout << "Enter Product Number (or -1 to quit): ";
    cin >> pNum;

    while (pNum != -1) {
        cout << "Enter Quantity Sold: ";
        cin >> Qsold;

        switch (pNum) {
            case 1:
                Rprice = 2.98;
                break;
            case 2:
                Rprice = 4.50;
                break;
            case 3:
                Rprice = 9.98;
                break;
            case 4:
                Rprice = 4.49;
                break;
            case 5:
                Rprice = 6.87;
                break;
            default:
                Rprice = 0.0;
                cout << "Invalid product number." << endl;
                break;
        }

        Tsold += Rprice * Qsold;

        cout << "Enter Product Number (or -1 to quit): ";
        cin >> pNum;
    }

    cout << "Total sales amount: $" << fixed << setprecision(2) << Tsold << endl;

    return 0;
}
