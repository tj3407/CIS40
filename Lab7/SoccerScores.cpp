#include <iostream>
using namespace std;

struct SoccerPlayer {
    string name;
    int playerNumber;
    int pointsScored;
};

void printData(SoccerPlayer[], int size);

int main() {
    int SIZE = 12;
    SoccerPlayer players[12];
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter Player " << i + 1 << " name: ";
        cin >> players[i].name;

        do {
            cout << "Enter Player " << i + 1 << " number: ";
            cin >> players[i].playerNumber;

            if (players[i].playerNumber < 0) {
                cout << "Invalid value. Please try again" << endl;
            }
        } while (players[i].playerNumber < 0);

        do {
            cout << "Enter Player " << i + 1 << " points scored: ";
            cin >> players[i].pointsScored;

            if (players[i].pointsScored < 0) {
                cout << "Invalid value. Please try again" << endl;
            }
        } while (players[i].pointsScored < 0);
    }

    printData(players, SIZE);
}

void printData(SoccerPlayer players[], int size) {
    int totalPointsScored = 0;
    SoccerPlayer highestScoringPlayer = players[0];

    cout << "Player Name \t" << "Player Number \t" << "Points Scored" << endl;

    for (int i = 0; i < size; i++) {
        cout << players[i].name << "\t\t" << players[i].playerNumber << "\t\t" << players[i].pointsScored << endl;

        totalPointsScored += players[i].pointsScored;

        if (i != 0) {
            if (players[i].pointsScored > highestScoringPlayer.pointsScored) {
                highestScoringPlayer = players[i];
            }
        }
    }

    cout << endl << "Total Points scored by team: " << totalPointsScored << endl;
    cout << "Highest Scoring Player" << endl;
    cout << "Name: " << highestScoringPlayer.name << endl;
    cout << "Points Scored: " << highestScoringPlayer.pointsScored << endl;
}