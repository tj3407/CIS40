#include <iostream>
#include <vector>
using namespace std;

int main() {
    int EXAM_SIZE = 20;
    char answers[] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    char userAnswers[EXAM_SIZE];
    int numOfCorrect = 0;
    int numOfIncorrect = 0;
    vector<int> incorrectAnswerList;

    for (int i = 0; i < EXAM_SIZE; i++) {
        do {
            cout << "Enter answer: ";
            cin >> userAnswers[i];

            if (userAnswers[i] == 'A' || userAnswers[i] == 'B' || userAnswers[i] == 'C' || userAnswers[i] == 'D') {
                if (answers[i] == userAnswers[i]) {
                    numOfCorrect++;
                } else {
                    numOfIncorrect++;
                    incorrectAnswerList.push_back(i+1);
                }
            } else {
                cout << "Invalid input. Please try again" << endl;
            }
        } while (!(userAnswers[i] == 'A' || userAnswers[i] == 'B' || userAnswers[i] == 'C' || userAnswers[i] == 'D'));
    }

    cout << "Correct answers: " << numOfCorrect << endl;
    cout << "Incorrect answers: " << numOfIncorrect << endl;
    cout << "Question numbers missed: " << endl;

    if (incorrectAnswerList.size() == 0)
        cout << "none";
    else {
        for (int i = 0; i < incorrectAnswerList.size(); i++)
            cout << incorrectAnswerList.at(i) << endl;
    }
    cout << endl;

}