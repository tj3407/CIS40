#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string name;
        int id;
        int step;
        int age;
        int baseSalary;
    public:
        void display();
        void raise();
        double earnings();
        Employee() {
            id = 0;
            name = "";
            step = 0;
            age = 0;
            baseSalary = 0;
        }

        Employee(string empName, int empId, int empStep, int empAge, int empBaseSalary) {
            name = empName;
            id = empId;
            step = empStep;
            age = empAge;
            baseSalary = empBaseSalary;
        }

        // Mutator functions
        void setName(string empName) {
            name = empName;
        }

        void setId(int empId) {
            id = empId;
        }

        void setStep(int empStep) {
            step = empStep;
        }

        void setAge(int empAge) {
            age = empAge;
        }

        void setBaseSalary(int empBaseSalary) {
            baseSalary = empBaseSalary;
        }

        // Accessor functions
        string getName() const {
            return name;
        }

        int getId() const {
            return id;
        }

        int getStep() const {
            return step;
        }

        int getAge() const {
            return age;
        }

        int getSalary() const {
            return baseSalary;
        }
};

void Employee::display() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Step: " << step << endl;
    cout << "Age: " << age << endl;
    cout << "Base Salary: " << baseSalary << endl << endl;
}

void Employee::raise() {
    baseSalary += baseSalary * .10;
    step++;
}

double Employee::earnings() {
    return baseSalary + (step * 1000);
}

int main() {
    Employee employee1("Susan Meyers", 47899, 5, 35, 150000);
    Employee employee2("Mark Jones", 39119, 6, 38, 175000);
    Employee employee3("Joy Rogers", 81774, 3, 23, 80000);
    Employee employee4("Joy Rogers", 81774, 8, 45, 200000);

    employee3.raise();

    employee1.display();
    employee2.display();
    employee3.display();
    employee4.display();
}
