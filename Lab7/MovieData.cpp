#include <iostream>
using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

// Prototype
void printMovie(MovieData);

int main() {
    MovieData movie1 = {"Black Panther", "Ryan Coogler", 2018, 135};
    MovieData movie2 = {"Saving Private Ryan", "Steven Spielberg", 1998, 170};

    cout << "Movie Data" << endl << endl;
    printMovie(movie1);
    printMovie(movie2);

    return 0;
}

void printMovie(MovieData movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << endl << endl;
}