#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <set>
using namespace std;

void displayUniqueWords(set<string, greater<string> > s) {
    set<string, greater<string> >::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << endl;
    }
}

void displayCommonWords(set<string, greater<string> > s1, set<string, greater<string> > s2) {
    set<string, greater<string> >::iterator itr;
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        if (s2.count(*itr)) {
            cout << *itr << endl;
        }
    }
}

void displayUniqueWordsInFirstFile(set<string, greater<string> > s1, set<string, greater<string> > s2) {
    set<string, greater<string> >::iterator itr;
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        if (!s2.count(*itr)) {
            cout << *itr << endl;
        }
    }
}

int main() {
    string line;
    set<string, greater<string> > file1;
    set<string, greater<string> > file2;
    ifstream myfile ("sample.txt");
    ifstream myfile2 ("sample2.txt");

    if (myfile.is_open()) {
        while (getline(myfile,line))
        {
            file1.insert(line);
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }

    if (myfile2.is_open()) {
        while (getline(myfile2,line))
        {
            file2.insert(line);
        }
        myfile2.close();
    } else {
        cout << "Unable to open file";
    }

    cout << "Unique words in file 1: " << endl;
    displayUniqueWords(file1);

    cout << "Unique words in file 2: " << endl;
    displayUniqueWords(file2);

    cout << "Common words: " << endl;
    displayCommonWords(file1, file2);

    cout << "Words in file 1 that are not in file 2: " << endl;
    displayUniqueWordsInFirstFile(file1, file2);

    cout << "Words in file 2 that are not in file 1: " << endl;
    displayUniqueWordsInFirstFile(file2, file1);

    cout << "Words in file 1 and file 2 that don't appear in both: " << endl;
    displayUniqueWordsInFirstFile(file1, file2);
    displayUniqueWordsInFirstFile(file2, file1);
}