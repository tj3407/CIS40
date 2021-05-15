#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <set>
using namespace std;

int main () {
    string line;
    set<string, greater<string> > set1;
    ifstream myfile ("sample.txt");

    if (myfile.is_open()) {
        while (getline(myfile,line))
        {
            set1.insert(line);
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }

    set<string, greater<string> >::iterator itr;
    cout << "Unique words:" << endl;
    for (itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << endl;
    }
    cout << endl;

    return 0;
}