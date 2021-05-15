#include <iostream>
#include <vector>
using namespace std;

// struct implementation storing customer data values
struct CustomerAccount {
    string name;
    string address;
    string city;
    string state;
    int zip;
    string phoneNumber;
    int accountBalance;
    string dateOfLastPayment;
};

// Prototypes
void createEntry(vector<CustomerAccount> &);
void searchEntry(vector<CustomerAccount>);
void removeEntry(vector<CustomerAccount> &);
void updateEntry(vector<CustomerAccount> &);
void displayAllEntries(vector<CustomerAccount>);

int main() {
    // vector to store collection of CustomerAccount types
    vector<CustomerAccount> accounts;
    int selection;

    // User menu implemented using a do-while loop and only exits
    // the promps when user chooses the Quit option
    do {
        cout << endl << "Please select an option" << endl;
        cout << "1: Create a new Entry" << endl;
        cout << "2: Search an Entry" << endl;
        cout << "3: Delete an Entry" << endl;
        cout << "4: Update an Entry" << endl;
        cout << "5: Display all Entries" << endl;
        cout << "6: Quit" << endl;

        cin >> selection;

        if (selection == 1) {
            // Create a new entry
            createEntry(accounts);
        } else if (selection == 2) {
            // Search an entry
            searchEntry(accounts);
        } else if (selection == 3) {
            // Remove an entry
            removeEntry(accounts);
        } else if (selection == 4) {
            // Update an entry
            updateEntry(accounts);
        } else if (selection == 5) {
            // Display all entries
            displayAllEntries(accounts);
        } else if (selection == 6) {
            cout << "Thank you" << endl;
        } else {
            cout << "Invalid Selection. Please try again" << endl;
        }
    } while(selection != 6);

}

// Method to create a new entry
void createEntry(vector<CustomerAccount> &accounts) {
    // Create a new instance of CustomerAccount struct
    CustomerAccount customer;

    // Start of user input
    cout << "Enter details for a new customer" << endl;
    cout << "Name: ";
    getline(cin >> ws, customer.name);

    cout << "Address: ";
    getline(cin >> ws, customer.address);

    cout << "City: ";
    getline(cin >> ws, customer.city);

    cout << "State: ";
    getline(cin >> ws, customer.state);

    cout << "Zip: ";
    cin >> customer.zip;

    cout << "Phone Number: ";
    getline(cin >> ws, customer.phoneNumber);

    cout << "Account Balance: ";
    cin >> customer.accountBalance;

    cout << "Date of Last Payment: ";
    getline(cin >> ws, customer.dateOfLastPayment);

    // Add the new customer instance into the vector
    accounts.push_back(customer);
}


// Method to search an entry
void searchEntry(vector<CustomerAccount> accounts) {
    string name;

    cout << "Enter Customer's Name to search: ";
    getline(cin >> ws, name);

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].name == name) {
            cout << endl << "*******************" << endl;
            cout << "Name: " << accounts[i].name << endl;
            cout << "Address: " << accounts[i].address << endl;
            cout << "City, State, Zip: " << accounts[i].city << " " << accounts[i].state << " " << accounts[i].zip << endl;
            cout << "Phone: " << accounts[i].phoneNumber << endl;
            cout << "Account Balance: " << accounts[i].accountBalance << endl;
            cout << "Date of Last Payment: " << accounts[i].dateOfLastPayment << endl << "*******************" << endl;
        } else {
            cout << "*******************" << endl << "No customer by that name found! Please try again" << endl << "*******************" << endl;
        }
    }
}

// Method to remove an entry
void removeEntry(vector<CustomerAccount> &accounts) {
    string name;

    cout << "Enter Customer's Name to remove: ";
    getline(cin >> ws, name);

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].name == name) {
            accounts.erase(accounts.begin() + i);
            cout << endl << "*******************" << endl << "Customer " << name << " has been deleted" << endl << "*******************" << endl;
        } else {
            cout << "*******************" << endl << "No customer by that name found! Please try again" << endl << "*******************" << endl;
        }
    }
}

// Method to update an entry
void updateEntry(vector<CustomerAccount> &accounts) {
    string name;
    string input;
    int numInput;
    cout << "Enter Customer's Name to update: ";
    getline(cin >> ws, name);

    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].name == name) {
            cout << "Enter Name: ";
            getline(cin >> ws, input);
            accounts[i].name = input;

            cout << "Enter Address: ";
            getline(cin >> ws, input);
            accounts[i].address = input;

            cout << "Enter City: ";
            getline(cin >> ws, input);
            accounts[i].city = input;

            cout << "Enter State: ";
            getline(cin >> ws, input);
            accounts[i].state = input;

            cout << "Enter Zip: ";
            cin >> numInput;
            accounts[i].zip = numInput;

            cout << "Phone Number: ";
            getline(cin >> ws, input);
            accounts[i].phoneNumber = input;

            cout << "Account Balance: ";
            cin >> numInput;
            accounts[i].accountBalance = numInput;

            cout << "Date of Last Payment: ";
            getline(cin >> ws, input);
            accounts[i].dateOfLastPayment = input;
        } else {
            cout << "*******************" << endl << "No customer by that name found! Please try again" << endl << "*******************" << endl;
        }
    }
}

// Method to display all entries
void displayAllEntries(vector<CustomerAccount> accounts) {
    cout << "Accounts" << endl << endl;
    cout << "Name \t Address \t City State, Zip \t Phone Number \t Account Balance \t Date of Last Payment" << endl;
    for (int i = 0; i < accounts.size(); i++) {
        cout << accounts[i].name << "\t";
        cout << accounts[i].address << "\t  ";
        cout << accounts[i].city << " " << accounts[i].state << ", " << accounts[i].zip << "\t";
        cout << accounts[i].phoneNumber << "\t";
        cout << accounts[i].accountBalance << "\t\t\t";
        cout << accounts[i].dateOfLastPayment << "\t";
        cout << endl;
    }
}