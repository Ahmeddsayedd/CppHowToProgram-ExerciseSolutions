
// (Global Warming Facts Quiz)



// Answer:

#include <iostream>
using namespace std;

int main()
{
    int choice, correct = 0;

    // Loop through 5 questions
    for (int counter = 1; counter <= 5; counter++)
    {
        switch (counter)
        {
        case 1:
            // Question 1
            cout << "What is the primary cause of recent global warming according to the majority of climate scientists? Enter your choice (1-4)" << endl;
            cout << "1. Natural climate cycles\n2. Solar radiation\n3. Human activities, such as burning fossil fuels\n4. Volcanic eruptions" << endl;
            cin >> choice;
            if (choice == 3)
                correct++;  // Increment correct answers if choice is correct
            break;

        case 2:
            // Question 2
            cout << "Which of the following is a common argument made by global warming skeptics? Enter your choice (1-4)" << endl;
            cout << "1. Climate change is a natural phenomenon\n2. The Earth's temperature has remained constant over the past century\n3. Human activity has a negligible impact on the climate\n4. Global warming will benefit agriculture in cold regions" << endl;
            cin >> choice;
            if (choice == 1)
                correct++;  // Increment correct answers if choice is correct
            break;

        case 3:
            // Question 3
            cout << "Which organization shared the 2007 Nobel Peace Prize with Al Gore for their work on climate change? Enter your choice (1-4)" << endl;
            cout << "1. Greenpeace\n2. The United Nations\n3. The Intergovernmental Panel on Climate Change (IPCC)\n4. World Wildlife Fund (WWF)" << endl;
            cin >> choice;
            if (choice == 3)
                correct++;  // Increment correct answers if choice is correct
            break;

        case 4:
            // Question 4
            cout << "What is the estimated global temperature increase since the late 19th century? Enter your choice (1-4)" << endl;
            cout << "1. 0.5°C\n2. 1.0°C\n3. 1.5°C\n4. 2.0°C" << endl;
            cin >> choice;
            if (choice == 2)
                correct++;  // Increment correct answers if choice is correct
            break;

        case 5:
            // Question 5
            cout << "Which of the following is a potential consequence of global warming? Enter your choice (1-4)" << endl;
            cout << "1. Increased polar bear populations\n2. Stabilization of global weather patterns\n3. Rising sea levels\n4. Cooling of the Earth's core" << endl;
            cin >> choice;
            if (choice == 3)
                correct++;  // Increment correct answers if choice is correct
            break;
        }
    }

    // Provide feedback based on the number of correct answers
    switch (correct)
    {
    case 1: case 2: case 3:
        cout << "Time to brush up on your knowledge of global warming:\n"
             << "1. https://climate.nasa.gov/\n"
             << "2. https://www.ipcc.ch/\n"
             << "3. https://www.skepticalscience.com/\n"
             << "4. https://www.nationalgeographic.com/environment/global-warming/global-warming-overview/";
        break;
    case 4:
        cout << "Very good";
        break;
    case 5:
        cout << "Excellent";
        break;
    }

    return 0;
}
