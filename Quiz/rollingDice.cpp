#include <iostream>
using namespace std;

// Prototypes
int rollDice();
int findMax(int [], int);

int main() {
    int SIZE = 13;
    int recurrence[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 36000; i++) {
        int index = rollDice();
        recurrence[index]++;
    }

    cout << "Sum with the most occurrence is: " << findMax(recurrence, SIZE) << endl;
}

int rollDice() {
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;

    return dice1 + dice2;
}

int findMax(int sumRecurrence[], int SIZE) {
    int maxIndex = 2;

    for (int i = 3; i < SIZE; i++) {
        if (sumRecurrence[i] > sumRecurrence[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}