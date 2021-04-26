#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int idNumber;
        string department;
        string position;
    public:
        void printEmployee();
        Employee() {
            idNumber = 0;
            name = "";
            department = "";
            position = "";
        }

        Employee(string employeeName, int employeeIdNumber, string employeeDepartment, string employeePosition) {
            name = employeeName;
            idNumber = employeeIdNumber;
            department = employeeDepartment;
            position = employeePosition;
        }

        Employee(string employeeName, int employeeIdNumber) {
            name = employeeName;
            idNumber = employeeIdNumber;
            department = "";
            position = "";
        }

        // Mutator functions
        void setName(string n) {
            name = n;
        }

        void setIdNumber(int i) {
            idNumber = i;
        }

        void setDepartment(string dep) {
            department = dep;
        }

        void setPosition(string pos) {
            position = pos;
        }

        // Accessor functions
        string getName() const {
            return name;
        }

        int getIdNumber() const {
            return idNumber;
        }

        string getDepartment() const {
            return department;
        }

        string getPosition() const {
            return position;
        }
};

void Employee::printEmployee() {
    cout << "Name: " << name << endl;
    cout << "ID: " << idNumber << endl;
    cout << "Department: " << department << endl;
    cout << "Position: " << position << endl << endl;
}

#endif