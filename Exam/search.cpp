#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValueInArray(int target, int arr[], int size) {
    for (int j = 0; j < size; j++) {
        if (arr[j] == target) {
            return true;
        }
    }

    return false;
}

int vectorsCount(vector<int> nums, int arr[], int size) {
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (isValueInArray(nums[i], arr, size)) {
            count++;
        }
    }

    return count;
}

void populateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int randIndex = rand() % size + 0;
        arr[randIndex] = rand() % 1000000 + 0;
    }
}

int main() {
    int SIZE = 10000;
    int intArray[SIZE];
    vector<int> numbersInput;

    populateArray(intArray, SIZE);

    for (int i = 0; i < 10; i++) {
        int value = 0;
        cout << "Enter a random number between 0 to 1,000,000: ";
        cin >> value;
        numbersInput.push_back(value);
    }

    cout << "Number of items in vector found in array: " << vectorsCount(numbersInput, intArray, SIZE) << endl;
}