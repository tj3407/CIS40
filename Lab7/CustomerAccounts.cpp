#include <iostream>
using namespace std;

struct CustomerAccount {
    string name;
    string address;
    string cityStateZip;
    string phoneNumber;
    int accountBalance;
    string dateOfLastPayment;
};

// Prototypes
void populateData(CustomerAccount[], int);
void printData(CustomerAccount[], int);
void updateData(CustomerAccount[], int);

int main() {
    int SIZE = 10;
    CustomerAccount accounts[SIZE];
    int selection;

    do {
        cout << "Please select an option" << endl;
        cout << "1: Populate Data" << endl;
        cout << "2: Print All Data" << endl;
        cout << "3: Update Entry" << endl;
        cout << "4: Quit" << endl;

        cin >> selection;

        if (selection == 1) {
            populateData(accounts, SIZE);
        } else if (selection == 2) {
            printData(accounts, SIZE);
        } else if (selection == 3) {
            updateData(accounts, SIZE);
        } else if (selection == 4) {
            cout << "Thank you" << endl;
        } else {
            cout << "Invalid Selection. Please try again" << endl;
        }
    } while(selection != 4);

}

void populateData(CustomerAccount accounts[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter details for customer #" << i + 1 << endl;
        cout << "Name: ";
        cin >> accounts[i].name;

        cout << "Address: ";
        cin >> accounts[i].address;

        cout << "City, State, Zip: ";
        cin >> accounts[i].cityStateZip;

        cout << "Phone Number: ";
        cin >> accounts[i].phoneNumber;

        do {
            cout << "Account Balance: ";
            cin >> accounts[i].accountBalance;

            if (accounts[i].accountBalance < 0) {
                cout << "Invalid entry. Try again" << endl;
            }
        } while (accounts[i].accountBalance < 0);

        cout << "Date of Last Payment: ";
        cin >> accounts[i].dateOfLastPayment;
    }
}

void printData(CustomerAccount accounts[], int size) {
    cout << "Accounts" << endl << endl;
    cout << "Name \t Address \t City, State, Zip \t Phone Number \t Account Balance \t Date of Last Payment" << endl;
    for (int i = 0; i < size; i++) {
        cout << accounts[i].name << "\t";
        cout << accounts[i].address << "\t";
        cout << accounts[i].cityStateZip << "\t";
        cout << accounts[i].phoneNumber << "\t";
        cout << accounts[i].accountBalance << "\t\t\t";
        cout << accounts[i].dateOfLastPayment << "\t";
        cout << endl;
    }
}

void updateData(CustomerAccount accounts[], int size) {
    int selection;
    cout << "Please enter the number of the entry you wish to update" << endl;

    for (int i = 0; i < size; i++) {
        cout << i + 1 << endl;
        cout << "Name: " << accounts[i].name << "\t" << endl;
        cout << "Address: " << accounts[i].address << "\t" << endl;
        cout << "City, State, Zip: " << accounts[i].cityStateZip << "\t" << endl;
        cout << "Phone Number: " << accounts[i].phoneNumber << "\t" << endl;
        cout << "Account Balance: " << accounts[i].accountBalance << "\t\t\t" << endl;
        cout << "Date of Last Payment: " << accounts[i].dateOfLastPayment << "\t" << endl;
        cout << endl;
    }

    cin >> selection;

    cout << "Enter name: ";
    cin >> accounts[selection-1].name;

    cout << "Enter address: ";
    cin >> accounts[selection-1].address;

    cout << "Enter city, state, zip: ";
    cin >> accounts[selection-1].cityStateZip;

    cout << "Enter phone number: ";
    cin >> accounts[selection-1].phoneNumber;

    cout << "Enter account balance: ";
    cin >> accounts[selection-1].accountBalance;

    cout << "Enter date of last payment: ";
    cin >> accounts[selection-1].dateOfLastPayment;
}