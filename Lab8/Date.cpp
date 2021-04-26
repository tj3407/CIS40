#include <iostream>
using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;
    public:
        void setDate();
        void printDate1();
        void printDate2();
        void printDate3();
};

void Date::setDate() {
    do {
        cout << "Enter month: ";
        cin >> month;

        if (month < 1 && month > 12) {
            cout << "Invalid entry. Please try again" << endl;
        }
    } while (month < 1 && month > 12);

    do {
        cout << "Enter day: ";
        cin >> day;
        if (day < 1 && day > 31) {
            cout << "Invalid entry. Please try again" << endl;
        }
    } while (day < 1 && day > 31);

    cout << "Enter year: ";
    cin >> year;
}

void Date::printDate1() {
    cout << month << "/" << day << "/" << year << endl;
}

void Date::printDate2() {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << months[month-1] << " " << day << ", " << year << endl;
}

void Date::printDate3() {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << day << " " << months[month-1] << " " << year << endl;
}

int main() {
    Date date;
    date.setDate();
    date.printDate1();
    date.printDate2();
    date.printDate3();
}