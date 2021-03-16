#include <iostream>
using namespace std;

// Protoype
void reverseNum(int &);
int findSecondLargest(int [], int);

int main() {
    int SIZE = 30;
    int inputArray[SIZE];
    int inputNumber;
    int count = 0;

    do {
        cout << "Enter a positive number: ";
        cin >> inputNumber;
        
        if (inputNumber < 0) {
            cout << "Invalid input. Try again." << endl;
        } else {
            inputArray[count] = inputNumber;
            count++;
        }
    } while (count < SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        reverseNum(inputArray[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        cout << inputArray[i] << endl;
    }

    int secondLargest = findSecondLargest(inputArray, SIZE);

    cout << "Second largest number is " << secondLargest;
}

void reverseNum(int &num) {
    int remainder, reversedNumber = 0;
    while(num != 0) {
        remainder = num%10;
        reversedNumber = reversedNumber*10 + remainder;
        num /= 10;
    }

    num = reversedNumber;
}

int findSecondLargest(int numArray[], int SIZE) {
    sort(numArray, numArray + SIZE);
    return numArray[SIZE-2];
}
