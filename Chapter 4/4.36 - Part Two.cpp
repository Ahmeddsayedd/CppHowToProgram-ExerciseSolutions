// (Enforcing Privacy with Cryptography)
// The explosive growth of Internet communications and data storage on Internet-connected computers has greatly increased privacy concerns.
// The field of cryptography is concerned with coding data to make it difficult (and hopefully—with the most advanced schemes—impossible)
// for unauthorized users to read. In this exercise you’ll investigate a simple scheme for encrypting and decrypting data.
// A company that wants to send data over the Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely.
// All the data is transmitted as four-digit integers. Your application should read a four-digit integer entered by the user and encrypt it as follows:
// Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10.
// Then swap the first digit with the third, and swap the second digit with the fourth. Then print the encrypted integer.
// Write a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption scheme)
// to form the original number. [Optional reading project: Research “public key cryptography” in general and the PGP (Pretty Good Privacy)
// specific public key scheme. You may also want to investigate the RSA scheme, which is widely used in industrial-strength applications.]



// Answer:

// Decoding Code:

#include <iostream>
using namespace std;

int main()
{
    int num, Decoded, DecodedFINAL = 0, counter = 1000, rem;
    cout << "Enter 4-digit code to decode: ";
    cin >> num;

    // Extract digits from encoded number
    int first = (num / 1000) % 10;
    int second = (num / 100) % 10;
    int third = (num / 10) % 10;
    int fourth = num % 10;

    // Reorder digits to reverse the encryption process
    Decoded = third * 1000 + fourth * 100 + first * 10 + second;

    // Decrypt each digit by adding 3 and reverse the order
    while (counter != 0) // Counter is used to extract digits from Decoded
    {

        // During encoding, we added 7 to each digit. To reverse this process during decoding, we add 3 to each digit.
        // This is because adding 7 in modular arithmetic can be reversed by subtracting 7, but to avoid negative numbers,
        // we use the equivalent positive adjustment within the modulus 10 system. Since (-7 + 10) results in 3, we add 3 to
        // effectively undo the encryption while keeping the result within the 0-9 range.

        rem = ((Decoded / counter) % 10 + 3) % 10; // Decrypt digit, ensure it's in range 0-9
        DecodedFINAL = DecodedFINAL * 10 + rem; // Build decoded number
        counter /= 10; // Move to the next digit
    }

    cout << "Decoded Number is: " << DecodedFINAL << endl;

    return 0;
}


