#include <iostream>
using namespace std;

// Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main() {
    int score1, score2, score3, score4, score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);
}

void getScore(int &score) {
    do {
        cout << "Enter score: ";
        cin >> score;

        if (score < 0 || score > 100) {
            cout << "Invalid value" << endl;
        };
    } while (score < 0 || score > 100);
}

void calcAverage(int score1, int score2, int score3, int score4, int score5) {
    int lowestScore = findLowest(score1, score2, score3, score4, score5);
    double average = (score1 + score2 + score3 + score4 + score5 - lowestScore) / 4;

    cout << "Average of the 4 highest scores is: ";
    cout << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5) {
    int lowest = score1;

    if (lowest > score2) {
        lowest = score2;
    }

    if (lowest > score3) {
        lowest = score3;
    }

    if (lowest > score4) {
        lowest = score4;
    }

    if (lowest > score5) {
        lowest = score5;
    }

    return lowest;
}