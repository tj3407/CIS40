#include <iostream>
using namespace std;
int main() {
    int month, day, year;
    cout << "Enter month: ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter 2 digit year: ";
    cin >> year;

    if (month * day == year) cout << "Date is magical! \n";
    else cout << "Date is NOT magical. \n";
}