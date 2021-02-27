#include <iostream>
using namespace std;

int main() {
    int num, maxnum = INT_MIN, minnum = INT_MAX;

    do {
        cout << "Enter integer or -99 to quit: ";
        cin >> num;

        if (num != -99) {
            maxnum = max(maxnum, num);
            minnum = min(minnum, num);
        }
    } while (num != -99);

    cout << "Largest number is: " << maxnum << "\n";
    cout << "Smalles number is: " << minnum << "\n";
}