#include <iostream>
using namespace std;

// Prototypes
int *newNumArr(int [], int);
void reverse(int [], int);
void printArray(int [], int);

int main() {
    int SIZE = 5;
    int numArr[] = {10, 25, 5, 3, 1};

    printArray(numArr, SIZE);

    int *numArrPointer = newNumArr(numArr, SIZE);

    printArray(numArrPointer, SIZE);

    return 0;
}

int* newNumArr(int numArr[], int size) {
    int* newArrPointer = new int[size];
    int temp;

    for(int i = 0; i < size; i++) {
        newArrPointer[i] = numArr[i];
    }

    reverse(newArrPointer, size);

    return newArrPointer;
}

void reverse(int arr[], int size)
{
   int temp;
   for (int i = 0; i < size/2; ++i)
   {
      temp = arr[i];
      arr[i] = arr[size-i-1];
      arr[size-i-1] = temp;
   }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << " " << endl;
}

