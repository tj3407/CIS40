#include <iostream>
#include <string>
using namespace std;

// Prototype
void displayBackwards(char str[]); 

int main() {
    const int SIZE = 20;
    char strInput[SIZE];
    char *strInputPointer = strInput;
    cout << "Enter input: ";
    cin >> strInput;
    
    displayBackwards(strInputPointer);
    return 0;
}

void displayBackwards(char str[]) {
    for (int i = strlen(str) - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}