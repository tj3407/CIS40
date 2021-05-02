#include <iostream>
using namespace std;

struct Student {
    double gpa;
    char grade;
    string name;
    int id;
};

void readValues(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter id for STUDENT " << i + 1 << ": ";
        cin >> students[i].id;

        cout << "Enter name for STUDENT " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "Enter gpa for STUDENT " << i + 1 << ": ";
        cin >> students[i].gpa;

        cout << "Enter grade for STUDENT " << i + 1 << ": ";
        cin >> students[i].grade;
    }
}

int main() {
    int SIZE = 4;
    Student students[SIZE];

    readValues(students, SIZE);

    for (int i = 0; i < SIZE; i++) {
        cout << "STUDENT " << i + 1 << ":" << endl;
        cout << "\t" << "ID: " << students[i].id << endl;
        cout << "\t" << "Name: " << students[i].name << endl;
        cout << "\t" << "GPA: " << students[i].gpa << endl;
        cout << "\t" << "Grade: " << students[i].grade << endl;
    }

}