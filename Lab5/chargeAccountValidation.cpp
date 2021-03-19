#include <iostream>
#include <vector>
using namespace std;

// Prototypes
int linearSearch(int [], int, int);

int main() {
    int chargeAccounts[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int numInput;
    

    cout << "Enter number: ";
    cin >> numInput;

    int result = linearSearch(chargeAccounts, 18, numInput);

    if (result > -1) {
        cout << "The number you entered is VALID." << endl;
    } else {
        cout << "The number you entered is INVALID" << endl;
    }
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
    }
    return position; 
}
