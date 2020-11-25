#include <iostream>
#include <string>

using namespace std;

// Questions
const char *questions[5] = {
    "How far is the sun from the earth?",
    "What a decimal of π?",
    "A stick and a ball together cost 110 euros. A stick costs 100 euros more than a ball. How much does a ball cost?",
    "What place are you in if you cross the last person in the race?",
    "Five minutes will take 5 machines to make 5 badges. How long would it take for 100 machines to make 100 badges?"
};

// Answers
const char *answers[5] = {
    "149600000",
    "3.14",
    "10",
    "None",
    "100"
};

// Variables
string answer = "";

void showQuestion(int index);

int main ()
{
    // Showing questions
    showQuestion(1);

    system("pause");

    return 0;
}

void showQuestion(int index)
{
    switch (index) {
        case 1: {
            std::cout << questions[0] << std::endl;
            std::cout << "Answer is: ";
            std::cin >> answer;
            
            
            if (answer != answers[0]) {
                system("exit");
            }

            else {
                showQuestion(2);
            }

            break;
        }

        case 2: {
            std::cout << "\n\n" << questions[1] << std::endl;
            std::cout << "Answer is: ";
            std::cin >> answer;


            if (answer != answers[1]) {
                system("exit");
            }

            else {
                showQuestion(3);
            }

            break;
        }

        case 3: {
            std::cout << "\n\n" << questions[2] << std::endl;
            std::cout << "Answer is: ";
            std::cin >> answer;

            
            if (answer != answers[2]) {
                system("exit");
            }

            else {
                showQuestion(4);
            }

            break;
        }

        case 4: {
            std::cout << "\n\n" << questions[3] << std::endl;
            std::cout << "Answer is: ";
            std::cin >> answer;

            
            if (answer != answers[3]) {
                system("exit");
            }

            else {
                showQuestion(5);
            }

            break;
        }

        case 5: {
            std::cout << "\n\n" << questions[4] << std::endl;
            std::cout << "Answer is: ";
            std::cin >> answer;

            
            if (answer != answers[4]) {
                system("exit");
            }

            else {
                system("cls");

                std::cout << "Congratulations, you've finished the quiz successfully.";
            }

            break;
        }
    }
}