#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int year = 1900;
    string population;
    ifstream MyReadFile("People.txt");

    cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n";

    while (getline (MyReadFile, population)) {
        int pop = std::stoi(population);

        cout << year << " ";

        while (pop > 0) {
            cout << "*";
            pop -= 1000;
        }

        cout << "\n";
        year += 20;
    };

    MyReadFile.close();
}