#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    employee1.printEmployee();
    employee2.printEmployee();
    employee3.printEmployee();
}

