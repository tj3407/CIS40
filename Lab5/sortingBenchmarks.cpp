#include <iostream>
using namespace std;

// Prototypes
void selectionSort(int [], int);
void bubbleSort(int [], int);
void swap(int&, int&);
int selectionSortCount = 0;
int bubbleSortCount = 0;

int main() {
    int SIZE = 20;
    int numArray[] = {19, 4, 17, 8, 13, 5, 9, 0, 16, 11, 7, 14, 12, 2, 18, 1, 3, 6, 15, 10};
    int numArray2[] = {19, 4, 17, 8, 13, 5, 9, 0, 16, 11, 7, 14, 12, 2, 18, 1, 3, 6, 15, 10};

    selectionSort(numArray, SIZE);
    bubbleSort(numArray2, SIZE);

    cout << "Selection Sort (# of swaps): " << selectionSortCount << endl;
    cout << "Bubble Sort (# of swaps): " << bubbleSortCount << endl;

}

void selectionSort(int array[], int size) {
    int minIndex, minValue;

    for (int start = 0; start < (size-1); start++) {
        minIndex = start;
        minValue = array[start];

        for (int index = start + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }
        selectionSortCount++;
        swap(array[minIndex], array[start]);
    }
}

void bubbleSort(int array[], int size) {
    int maxElement;
    int index;

    for (maxElement = size - 1; maxElement > 0; maxElement--) {
        for (index = 0; index < maxElement; index++) {
            if (array[index] > array[index + 1]) {
                swap(array[index], array[index + 1]);
                bubbleSortCount++;
            }
        }
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}