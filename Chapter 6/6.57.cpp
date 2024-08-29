
// 6.57 (Computer-Assisted Instruction)

// Solution:

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateQuestion();

using namespace std;

int main() {
    int userAnswer;
    int correctAnswer;

    srand(static_cast<unsigned int>(time(0)));

    enum answerStatus { Right, Wrong };
    answerStatus status = Wrong;

    while (true) {
    // The outer loop continuously generates and asks new questions. This ensures that even after the student answers a question correctly,
    // the program will keep presenting new questions indefinitely, allowing for ongoing practice.

    correctAnswer = generateQuestion();

        do {
            // The inner loop handles the scenario where the student's answer is incorrect. It keeps prompting the student to enter the correct answer
            // to the same question until the correct answer is provided. This reinforces learning by focusing on one problem at a time until it's solved correctly.

            cin >> userAnswer;
            if (userAnswer == correctAnswer) {
                status = Right;
                cout << "Very good!" << endl;
            } else {
                status = Wrong;
                cout << "No. Please try again." << endl;
            }
        } while (status == Wrong);

        // The `generateQuestion()` function is only called in the outer loop. This design choice ensures that the same question with the same numbers
        // is repeatedly asked until the student provides the correct answer. A new question is only generated once the student answers the current
        // question correctly, maintaining consistency and avoiding confusion.

    status = Wrong; // Reset the status to Wrong for the next round

    }

    return 0;
}

int generateQuestion() {
    int num1 = 1 + rand() % 9;
    int num2 = 1 + rand() % 9;

    cout << "How much is " << num1 << " times " << num2 << "?" << endl;

    return num1 * num2;
}


