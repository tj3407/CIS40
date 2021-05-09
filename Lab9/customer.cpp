#include <iostream>
#include "CustomerData.h"
using namespace std;

int main() {
    CustomerData customerData;
    char join;

    cout << "Join Mailing List? ";
    cin >> join;

    customerData.setCustomerNumber();
    customerData.setMailingList(join == 'y' ? true : false);
    customerData.setLastName("Smith");
    customerData.setFistName("John");
    customerData.setAddress("123 Main St");
    customerData.setCity("San Francisco");
    customerData.setState("CA");
    customerData.setZip("93453");
    customerData.setPhone("555-555-5555");

    cout << "Name: " << customerData.getFirstName() << " " << customerData.getLastName() << endl;
    cout << "Customer Number: " << customerData.getCustomerNumber() << endl;
    cout << "Mailing List: " << (customerData.getMailingList() ? "Yes" : "No") << endl;
    cout << "Address: " << customerData.getAddress() << " " << customerData.getCity() << ", " << customerData.getState() << " " << customerData.getZip() << endl;
    cout << "Phone: " << customerData.getPhone() << endl; 
}