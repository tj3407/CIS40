#include <iostream>
#include <string>
using namespace std;

// Prototypes
void capitalizeFirstWord(char str[]);

int main() {
    int SIZE = 100;
    char strInput[SIZE];
    char *strInputPointer = strInput;

    cout << "Enter sentence: ";
    cin.getline(strInput, SIZE);

    capitalizeFirstWord(strInputPointer);
}

void capitalizeFirstWord(char str[]) {
    int targetIndex = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i - 1] ==' ' || i == 0) {
            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;
}