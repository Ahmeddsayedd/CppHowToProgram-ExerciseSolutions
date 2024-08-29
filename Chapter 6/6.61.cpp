
// 6.61 (Computer-Assisted Instruction: Varying the Types of Problems)

// Solution:

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

double generateQuestion(int difficultyLevel, int arithmeticType);
int generateResponse();
int setDifficultyLevel();

using namespace std;

int main() {
    int userAnswer;
    int correctAnswer;
    int Response;
    int correctCount = 0;
    int counter = 0;
    int difficultyLevel;
    char choice;
    int arithmeticType;

    srand(static_cast<unsigned int>(time(0)));

    enum answerStatus { Right, Wrong };
    answerStatus status = Wrong;

    cout << "1. Addition\n"
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division\n"
         << "5. Mixture of all these types\n"
         << "Enter the type of arithmetic problem to study: ";
    cin >> arithmeticType;

    difficultyLevel = setDifficultyLevel();

    while (true) {
        // The outer loop continuously generates and asks new questions. This ensures that even after the student answers a question correctly,
        // the program will keep presenting new questions indefinitely, allowing for ongoing practice.

        correctAnswer = generateQuestion(difficultyLevel, arithmeticType);

        do {
            // The inner loop handles the scenario where the student's answer is incorrect. It keeps prompting the student to enter the correct answer
            // to the same question until the correct answer is provided. This reinforces learning by focusing on one problem at a time until it's solved correctly.

            // The `generateResponse()` function is placed within the inner loop because a new response needs to be generated for each attempt the student makes at answering the question.
            // This ensures that every time the student enters an answer, whether it's correct or incorrect, they receive fresh feedback.
            // By generating a new response on each trial, the program provides varied and engaging feedback, even when the student answers incorrectly and the same question is asked again.

            Response = generateResponse();
            counter++;

            cin >> userAnswer;
            if (userAnswer == correctAnswer) {
                status = Right;
                correctCount++;
                switch (Response) {
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
                switch (Response) {
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

            if (counter == 10) {
                if (correctCount >= 8) {
                    cout << "Congratulations, you are ready to go to the next level!" << endl;
                    cout << "Do you want to change the difficulty level? (Y or N): ";
                    cin >> choice;
                    if (choice == 'Y' || choice == 'y') {
                        // If the user chooses 'Y' or 'y', we not only call the setDifficultyLevel() function
                        // but also assign its return value to the difficultyLevel variable.
                        // This ensures that difficultyLevel is updated to the new value specified by the user.

                        difficultyLevel = setDifficultyLevel();
                    }
                } else {
                    cout << "Please ask your teacher for extra help." << endl;
                }

                // Reset for another student
                correctCount = 0;
                counter = 0;
                status = Wrong;
                break;
            }
        } while (status == Wrong);

        // The `generateQuestion()` function is only called in the outer loop. This design choice ensures that the same question with the same numbers
        // is repeatedly asked until the student provides the correct answer. A new question is only generated once the student answers the current
        // question correctly, maintaining consistency and avoiding confusion.

        status = Wrong; // Reset the status to Wrong for the next round
    }

    return 0;
}

double generateQuestion(int difficultyLevel, int arithmeticType) {
    // This code generates a random number with the specified number of digits based on the difficulty level.
    // For difficultyLevel = 1, it produces a number between 1 and 9. For difficultyLevel = 2, it produces a number between 10 and 99.
    // The expression (int)pow(10, difficultyLevel - 1) sets the minimum value, ensuring the correct number of digits.
    // rand() % (int)(pow(10, difficultyLevel) - pow(10, difficultyLevel - 1)) defines the range. For difficultyLevel = 2, rand() % 90 gives values from 0 to 89,
    // resulting in numbers from 10: (10 + 0) to 99: (10 + 89). Explicit casting of pow to int is needed because pow returns a double, which must be converted for accurate integer calculations.

    int num1 = (int)pow(10, difficultyLevel - 1) + rand() % (int)(pow(10, difficultyLevel) - pow(10, difficultyLevel - 1));
    int num2 = (int)pow(10, difficultyLevel - 1) + rand() % (int)(pow(10, difficultyLevel) - pow(10, difficultyLevel - 1));

    while (true) {
        // If the user selects option 5 (mix of all types), the code enters an infinite loop to randomly choose one of the
        // four arithmetic operations (addition, subtraction, multiplication, division) each time a new question is generated.
        // This ensures that each question can be of any type from 1 to 4.
        switch (arithmeticType) {
            case 1:
                cout << "How much is " << num1 << " + " << num2 << "?" << endl;
                return num1 + num2;
            case 2:
                cout << "How much is " << num1 << " - " << num2 << "?" << endl;
                return num1 - num2;
            case 3:
                cout << "How much is " << num1 << " * " << num2 << "?" << endl;
                return num1 * num2;
            case 4:
                if (num2 == 0) num2 = 1; // Ensure no division by zero
                cout << "How much is " << num1 << " / " << num2 << "?" << endl;
                return static_cast<double>(num1) / num2;
            case 5:
                arithmeticType = 1 + rand() % 4;
                break; // Exits the switch statement and returns to the while loop.
                // In the next iteration of the while loop, a new random arithmetic operation type (1 to 4) will be chosen.
        }
    }
}

int generateResponse() {
    return 1 + rand() % 4;
}

int setDifficultyLevel() {
    int difficultyLevel;
    do {
        cout << "Enter the difficulty level (ex: 1, 2.. etc): ";
        cin >> difficultyLevel;
        if (difficultyLevel <= 0) {
            cout << "Invalid difficulty level, please enter a valid difficulty level starts from 1" << endl;
        }
    } while (difficultyLevel <= 0);

    return difficultyLevel;
}
