#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void printBoard(char [3][3], int, int);
bool checkForWinner(char [3][3], int);

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    char board[ROWS][COLS] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'},};

    int row;
    int col;
    int count = 0;
    bool isPlayer1Winner = false;
    bool isPlayer2Winner = false;

    printBoard(board, ROWS, COLS);
    while (count < 9) {
        cout << "Player 1" << endl;
        cout << "Enter row: ";
        cin >> row;
        cout << "Enter column: ";
        cin >> col;
        board[row][col] = 'X';
        printBoard(board, ROWS, COLS);
        isPlayer1Winner = checkForWinner(board, 1);
        if (isPlayer1Winner) {
            cout << "Player 1 wins!" << endl;
            break;
        }

        count++;
        if (count >= 9) break;

        cout << "Player 2" << endl;
        cout << "Enter row: ";
        cin >> row;
        cout << "Enter column: ";
        cin >> col;
        board[row][col] = 'O';
        printBoard(board, ROWS, COLS);
        isPlayer2Winner = checkForWinner(board, 2);
        if (isPlayer2Winner) {
            cout << "Player 2 wins!" << endl;
            break;
        }

        count++;
    }
    if (!isPlayer1Winner && !isPlayer2Winner)
        cout << "It's a tie!" << endl;
}

void printBoard(char board[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "======" << endl;
}

bool checkForWinner(char board[3][3], int playerNum) {
    string pattern;
    if (playerNum == 1) {
        pattern = "XXX";
    } else {
        pattern = "OOO";
    }

    for (int i = 0; i < 3; i++){
        string row = "";
        for (int j = 0; j < 3; j++){
            row += board[i][j];
        }
        if (row == pattern)
            return true;
            
    }

    for (int i = 0; i < 3; i++){
        string col = "";
        for (int j = 0; j<3;j++){
            col += board[j][i];
        }
        if (col == pattern)
            return true;
    }

    string diagonal = "";
    diagonal += board[0][0];
    diagonal += board[1][1];
    diagonal += board[2][2];
    if (diagonal == pattern)
        return true;

    diagonal += board[2][0];
    diagonal += board[1][1];
    diagonal += board[0][2];
    if (diagonal == pattern)
        return true;

    return false;
}