#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData {
    protected:
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zip;
        string phone;
    public:
        PersonData() {
            lastName = "";
            firstName = "";
            address = "";
            city = "";
            state = "";
            zip = "";
            phone = "";
        }

        // Mutator functions
        void setLastName(string s) {
            lastName = s;
        }

        void setFistName(string s) {
            firstName = s;
        }

        void setAddress(string s) {
            address = s;
        }

        void setCity(string s) {
            city = s;
        }

        void setState(string s) {
            state = s;
        }

        void setZip(string s) {
            zip = s;
        }

        void setPhone(string s) {
            phone = s;
        }

        // Accessor functions
        string getLastName() {
            return lastName;
        }

        string getFirstName() {
            return firstName;
        }

        string getAddress() {
            return address;
        }

        string getCity() {
            return city;
        }

        string getState() {
            return state;
        }

        string getZip() {
            return zip;
        }

        string getPhone() {
            return phone;
        }
};

#endif