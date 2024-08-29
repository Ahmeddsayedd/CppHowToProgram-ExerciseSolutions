
// 6.58 (Computer-Assisted Instruction: Reducing Student Fatigue)

// Solution:

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateQuestion();
int generateResponse ();

using namespace std;

int main() {
    int userAnswer;
    int correctAnswer;
    int Response;

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


        // The `generateResponse()` function is placed within the inner loop because a new response needs to be generated for each attempt the student makes at answering the question.
        // This ensures that every time the student enters an answer, whether it's correct or incorrect, they receive fresh feedback.
        // By generating a new response on each trial, the program provides varied and engaging feedback, even when the student answers incorrectly and the same question is asked again.

            Response = generateResponse();

            cin >> userAnswer;
            if (userAnswer == correctAnswer) {
                status = Right;
                switch (Response)
                {
                    case 1:
                        cout << "Very good!" << endl;
                        break;
                    case 2:
                        cout << "Excellent!" << endl;
                        break;
                    case 3:
                        cout << "Nice work!" << endl;
                        break;
                    case 4:
                        cout << "Keep up the good work!" << endl;
                        break;
                }

            } else {
                status = Wrong;
                switch (Response)
                {
                    case 1:
                        cout << "No. Please try again." << endl;
                        break;
                    case 2:
                        cout << "Wrong. Try once more." << endl;
                        break;
                    case 3:
                        cout << "Don't give up!" << endl;
                        break;
                    case 4:
                        cout << "No. Keep trying." << endl;
                        break;
                }
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

int generateResponse ()
{
    return 1 + rand () % 4;
}

