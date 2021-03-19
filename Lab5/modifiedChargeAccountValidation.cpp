#include <iostream>
using namespace std;

// Prototypes
int binarySearch(int [], int, int);
void selectionSort(int [], int);
void swap(int&, int&);

int main() {
    int SIZE = 18;
    int chargeAccounts[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int numInput;
    

    cout << "Enter number: ";
    cin >> numInput;

    selectionSort(chargeAccounts, SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        cout << chargeAccounts[i] << endl;
    }

    int result = binarySearch(chargeAccounts, SIZE, numInput);

    if (result > -1) {
        cout << "The number you entered is VALID." << endl;
    } else {
        cout << "The number you entered is INVALID" << endl;
    }
}

int binarySearch(int array[], int size, int value){   
    int first = 0,     
        last = size - 1, 
        middle, 
        position = -1;        
        bool found = false; 
        
    while (!found && first <= last){      
        middle = (first + last) / 2;     
        
        if (array[middle] == value) {         
            found = true;         
            position = middle;      
        }
        else if (array[middle] > value)  
            last = middle - 1;      
        else         
            first = middle + 1;  
    }   
        
    return position;
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

        swap(array[minIndex], array[start]);
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}