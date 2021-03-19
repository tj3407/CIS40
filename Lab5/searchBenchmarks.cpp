#include <iostream>
using namespace std;

// Prototypes
int linearSearch(int [], int, int);
int binarySearch(int [], int, int);
int linearSearchCount = 0;
int binarySearchCount = 0;

int main() {
    int SIZE = 20;
    int numArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    
    linearSearch(numArray, SIZE, 18);
    binarySearch(numArray, SIZE, 18);

    cout << "Linear search (# of comparisons): " << linearSearchCount << endl;
    cout << "Binary search (# of comparisons): " << binarySearchCount << endl;
}

int linearSearch(int arr[], int size, int value){   
    int index = 0;         
    int position = -1;  
    bool found = false; 
   
    while (index < size && !found)   {      
        if (arr[index] == value) {          
            found = true; 
            position = index; 
        }      
        index++;  
        linearSearchCount++;
    }
    return position; 
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
        binarySearchCount++;
    }   
        
    return position;
}