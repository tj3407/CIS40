#include <iostream>
using namespace std;

// Prototypes
int* arrayExpander(int [], int);
void printArray(int [], int);

int main() {
    int SIZE = 5;
    int numArr[] = { 5, 6, 2, 4, 8 };

    printArray(numArr, SIZE);

    int* numArrPointer = arrayExpander(numArr, SIZE);

    printArray(numArrPointer, SIZE * 2);

    return 0;
}

int* arrayExpander(int arr[], int size) {
    int newSize = size * 2;
    int* newArrayPointer = new int[newSize];

    for (int i = 0; i < newSize; i++) {
        if (i >= size) {
            newArrayPointer[i] = 0;
        } else {
            newArrayPointer[i] = arr[i];
        }
    }

    return newArrayPointer;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << " " << endl;
}