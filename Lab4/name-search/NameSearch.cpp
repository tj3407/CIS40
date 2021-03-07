#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    string name;
    int ARRAY_SIZE = 200;
    string popularBoyNames[ARRAY_SIZE];
    string popularGirlNames[ARRAY_SIZE];
    int count = 0;

    // Read Boys Names and process
    ifstream MyReadFileBoyNames("BoyNames.txt");

    while(getline (MyReadFileBoyNames, name)) {
        popularBoyNames[count] = name;
        count++;
    }
    count = 0;

    // Read Girls Names and process
    ifstream MyReadFileGirlNames("GirlNames.txt");

    while(getline (MyReadFileGirlNames, name)) {
        popularGirlNames[count] = name;
        count++;
    }

    // Prompt for names
    string boyName;
    string girlName;

    cout << "Enter Boy name: ";
    cin >> boyName;
    cout << "Enter Girl name: ";
    cin >> girlName;

    bool isBoyNamePopular = false;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (popularBoyNames[i] == boyName) {
            isBoyNamePopular = true;
            break;
        }
    }

    if (isBoyNamePopular) {
        cout << boyName << " is popular!" << endl;
    } else {
        cout << boyName << " is NOT popular" << endl;
    }

    bool isGirlNamePopular = false;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (popularGirlNames[i] == boyName) {
            isGirlNamePopular = true;
            break;
        }
    }

    if (isGirlNamePopular) {
        cout << girlName << " is popular!" << endl;
    } else {
        cout << girlName << " is NOT popular" << endl;
    }
}