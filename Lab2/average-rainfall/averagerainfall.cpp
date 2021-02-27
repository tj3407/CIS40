#include <iostream>
using namespace std;
int main() {
    int numofyears, totalrainfall = 0, numofmonths;
    float averagerainfall;

    do {
        cout << "Enter number of years: ";
        cin >> numofyears;

        if (numofyears < 1) cout << "Must be at least 1 year. Please try again \n";
    } while (numofyears < 1);

    numofmonths = numofyears * 12;

    while (numofyears > 0) {
        int months = 1;

        while (months < 13) {
            int rainfall = 0;
            cout << "Enter amount of rainfall in inches for month " << months << ": ";
            cin >> rainfall;

            if (rainfall < 0) cout << "Invalid input. Must be a positive number. Please try again.\n";
            else {
                totalrainfall += rainfall;
                months++;
            }
        };
        numofyears--;
    }

    averagerainfall = totalrainfall / numofmonths;

    cout << "Number of months: " << numofmonths << "\n";
    cout << "Total inches of rainfall: " << totalrainfall << "\n";
    cout << "Average rainfall per month: " << averagerainfall << "\n";
}