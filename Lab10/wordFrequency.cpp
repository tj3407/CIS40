#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <map>
using namespace std;

int main() {
    string line;
    ifstream myfile ("sample.txt");
    map<string, int> words;

    if (myfile.is_open()) {
        while (getline(myfile,line))
        {
            if (words.count(line) > 0) {
                int count = words.at(line) + 1;
                cout << count;
                words[line] = count;
            } else {
                words.insert(pair<string, int> (line, 1));
            }
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }

    map<string, int>::iterator it;
    for (it = words.begin(); it != words.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
}