#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int sales[SIZE];
    int count = 0;
    int salesInput;

    do {
        cout << "Enter today's sales for store " << count + 1 << ": ";
        cin >> salesInput;

        if ((salesInput < 800 || salesInput > 1200) && (salesInput < 1700 || salesInput > 2000)) {
            cout << "Invalid input. Please try again" << endl;
        } else {
            sales[count] = salesInput;
            count++;
        }
    } while (count < SIZE);

    cout << "SALES BAR CHART (Each *= $100)" << endl;

    for (int i = 0; i < SIZE; i++) {
        string bar = "";
        while (sales[i] > 0) {
            bar += "*";
            sales[i] -= 100;
        }
        cout << "Store " << i+1 << ": " << bar << endl;
    }

}