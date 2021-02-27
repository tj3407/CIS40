#include <iostream>
using namespace std;
int main() {
    int balance, numofchecks;
    float monthlyfees = 10.00;

    cout << "Enter beginning balance: ";
    cin >> balance;

    if (balance < 0) {
        cout << "Warning: Account is overdrawn! \n";
        return 0;
    }

    cout << "Enter number of checks written: ";
    cin >> numofchecks;

    if (balance < 400) monthlyfees += 15;

    if (numofchecks < 20) monthlyfees += numofchecks * .10;
    if (numofchecks >= 20 && numofchecks < 40) monthlyfees += numofchecks * .08;
    if (numofchecks >= 40 && numofchecks < 60) monthlyfees += numofchecks * .06;
    if (numofchecks >= 60) monthlyfees += numofchecks * .04;

    cout << "Service fee for the month is $" << monthlyfees << "\n";
}