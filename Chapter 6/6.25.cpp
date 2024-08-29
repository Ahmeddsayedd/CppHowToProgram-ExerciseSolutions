
// 6.25 (Calculating Number of Seconds)

// Solution:

#include <iostream>
using namespace std;

long CalcSeconds(int hours, int minutes, int seconds);

int main()
{
    int H, M, S;

    cout << "Enter time (H M S): ";
    cin >> H >> M >> S;

    long result = CalcSeconds(H, M, S);

    if (result != -1) {
        cout << "The number of seconds between 12:00 and this time is: " << result;
    } else {
        cout << "Invalid Entry";
    }

    return 0;
}

long CalcSeconds(int hours, int minutes, int seconds)
{
    if (hours >= 0 && hours <= 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60)
    {
        if (hours == 0 || hours == 12)
        {
            return minutes * 60 + seconds;  // 12:00 AM or 12:00 PM
        }
        else if (hours > 0 && hours < 12)
        {
            return hours * 60 * 60 + minutes * 60 + seconds;  // AM time
        }
        else if (hours > 12 && hours <= 24)
        {
            return (hours - 12) * 60 * 60 + minutes * 60 + seconds;  // PM time
        }
    }

    return -1;  // Return -1 for invalid input
    // Returning -1 here is crucial because the function must return a value (it's not a void function).
    // The value -1 serves as an error flag to indicate invalid input, which the main function can detect and handle.
}
