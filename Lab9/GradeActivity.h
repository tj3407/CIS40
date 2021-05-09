#ifndef GRADEACTIVITY_H
#define GRADEACTIVITY_H
#include <string>
#include <iostream>
using namespace std;

class GradeActivity {
    protected:
        char letter;
        double score;
    public:
        GradeActivity() {
            letter = ' ';
            score = 0.0;
        }

        // Mutator function
        void setScore(double s) {
            score = s;
            determineGrade();
        }

        void determineGrade() {
            if (score >= 90 && score <= 100) {
                letter = 'A';
            } else if (score >= 80 && score < 90) {
                letter = 'B';
            } else if (score >= 70 && score < 80) {
                letter = 'C';
            } else if (score >= 60 && score < 70) {
                letter = 'D';
            } else if (score < 60) {
                letter = 'F';
            }
        }

        // Accessor functions
        double getScore() const {
            return score;
        }

        char getLetterGrade() const {
            return letter;
        }
};

#endif