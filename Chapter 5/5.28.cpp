
// (The Twelve Days of Christmas” Song)



// Answer:

        // Efficient Approach:
        // This switch statement uses fall-through to print the gifts received on each day.
        // By omitting 'break' statements, each case executes sequentially, printing all gifts
        // from the current day down to the first day. This method reduces redundancy and results
        // in more concise and maintainable code.

#include <iostream>
using namespace std;
int main ()
{
    for (int counter=1; counter<=12; counter++)
    {
        switch (counter)
        {
        case 1:
            cout << "On the first day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 2:
            cout << "On the second day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 3:
            cout << "On the third day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 4:
            cout << "On the fourth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 5:
            cout << "On the fifth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 6:
            cout << "On the sixth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 7:
            cout << "On the seventh day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 8:
            cout << "On the eighth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 9:
            cout << "On the ninth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 10:
            cout << "On the tenth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 11:
            cout << "On the eleventh day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 12:
            cout << "On the twelfth day of Christmas\nmy true love sent to me:" << endl;
            break;
        }

        // Print the gifts received on each day, with gifts from the current day down to the first day.
        // Note: Do not use 'break' in this switch statement.
        // Omitting 'break' allows the execution to "fall through" each case from the current day down to the first day.
        switch (counter)
        {
        case 12:
            cout << "12 Drummers Drumming" << endl;
        case 11:
            cout << "Eleven Pipers Piping" << endl;
        case 10:
            cout << "Ten Lords a Leaping" << endl;
        case 9:
            cout << "Nine Ladies Dancing" << endl;
        case 8:
            cout << "Eight Maids a Milking" << endl;
        case 7:
            cout << "Seven Swans a Swimming" << endl;
        case 6:
            cout << "Six Geese a Laying" << endl;
        case 5:
            cout << "Five Golden Rings" << endl;
        case 4:
            cout << "Four Calling Birds" << endl;
        case 3:
            cout << "Three French Hens" << endl;
        case 2:
            cout << "Two Turtle Doves" << endl;
        case 1:
            cout << "and a Partridge in a Pear Tree" << endl;
        }

    cout << endl << endl;
    }

    return 0;
}








        // Inefficient Approach:
        // This switch statement prints the gifts received on each day, but it uses individual
        // 'break' statements for each case. This results in repetitive code as each case lists out
        // the gifts for that specific day. Unlike the efficient approach, this method does not use
        // fall-through and therefore does not reduce redundancy. Each case explicitly handles the gifts
        // for the current day only, leading to less concise and more repetitive code.

/*


#include <iostream>
using namespace std;

int main ()
{
    for (int counter = 1; counter <= 12; counter++)
    {
        // Using a switch statement to print the introductory line for each day
        switch (counter)
        {
        case 1:
            cout << "On the first day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 2:
            cout << "On the second day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 3:
            cout << "On the third day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 4:
            cout << "On the fourth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 5:
            cout << "On the fifth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 6:
            cout << "On the sixth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 7:
            cout << "On the seventh day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 8:
            cout << "On the eighth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 9:
            cout << "On the ninth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 10:
            cout << "On the tenth day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 11:
            cout << "On the eleventh day of Christmas\nmy true love sent to me:" << endl;
            break;
        case 12:
            cout << "On the twelfth day of Christmas\nmy true love sent to me:" << endl;
            break;
        }

        // Switch statement to print the gifts received on each day.
        // Note: This is an inefficient approach compared to using 'break' and fall-through cases.
        // Each case has its own 'break' statement, which means the gifts are printed individually
        // for each day rather than using the fall-through logic to reduce redundancy.
        // In this code, every case statement explicitly lists out the gifts for that specific day,
        // making it less efficient and more repetitive compared to using fall-through.
        switch (counter)
        {
        case 1:
            cout << "my true love sent to me:\nA Partridge in a Pear Tree" << endl;
            break;
        case 2:
            cout << "my true love sent to me:\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 3:
            cout << "my true love sent to me:\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 4:
            cout << "my true love sent to me:\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 5:
            cout << "my true love sent to me:\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 6:
            cout << "my true love sent to me:\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 7:
            cout << "my true love sent to me:\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 8:
            cout << "my true love sent to me:\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 9:
            cout << "my true love sent to me:\nNine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 10:
            cout << "my true love sent to me:\nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 11:
            cout << "my true love sent to me:\nEleven Pipers Piping\nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        case 12:
            cout << "my true love sent to me:\nTwelve Drummers Drumming\nEleven Pipers Piping\nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Milking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\nTwo Turtle Doves\nand a Partridge in a Pear Tree" << endl;
            break;
        }
    }

    return 0;
}


*/
