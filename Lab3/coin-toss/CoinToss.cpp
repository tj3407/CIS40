#include <iostream>
using namespace std;

// Prototype
void coinToss();

int main() {
    int numOfCoinToss;
    cout << "Enter number of coin tosses: ";
    cin >> numOfCoinToss;

    while (numOfCoinToss > 0) {
        coinToss();
        numOfCoinToss--;
    };
}

void coinToss() {
    int randomNum = rand() % 2 + 1;

    if (randomNum == 1) {
        cout << "heads\n";
    } else if (randomNum == 2) {
        cout << "tails\n";
    }
}
