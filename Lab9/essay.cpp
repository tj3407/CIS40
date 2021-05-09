#include <iostream>
#include "Essay.h"
using namespace std;

int main() {
    Essay essay1;
    essay1.setGrammarScore(25);
    essay1.setSpellingScore(20);
    essay1.setCorrectLengthScore(18);
    essay1.setContentScore(30);

    essay1.setScore(essay1.getGrammarScore() + essay1.getSpellingScore() + essay1.getCorrectLengthScore() + essay1.getContentScore());

    cout << "Essay score: " << essay1.getScore() << endl;
    cout << "Essay grade: " << essay1.getLetterGrade() << endl;
};