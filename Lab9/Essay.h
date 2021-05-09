#ifndef ESSAY_H
#define ESSAY_H
#include "GradeActivity.h"

class Essay : public GradeActivity {
    protected:
        int grammar;
        int spelling;
        int correctLength;
        int content;
    public:
        Essay() : GradeActivity() {
            grammar = 0;
            spelling = 0;
            correctLength = 0;
            content = 0;
        }

        // Mutator functions
        void setGrammarScore(int g) {
            grammar = g;
        }

        void setSpellingScore(int s) {
            spelling = s;
        }

        void setCorrectLengthScore(int c) {
            correctLength = c;
        }

        void setContentScore(int cs) {
            content = cs;
        }

        // Accessor function
        int getGrammarScore() {
            return grammar;
        }

        int getSpellingScore() {
            return spelling;
        }

        int getCorrectLengthScore() {
            return correctLength;
        }

        int getContentScore() {
            return content;
        }
};

#endif

