#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <map>
using namespace std;

int main() {
    map<string, int> courseRoom;
    map<string, string> courseInstructor;
    map<string, string> courseMeetingTime;

    courseRoom.insert(pair<string, int> ("CS101", 3004));
    courseRoom.insert(pair<string, int> ("CS102", 4501));
    courseRoom.insert(pair<string, int> ("CS103", 6755));
    courseRoom.insert(pair<string, int> ("NT110", 1244));
    courseRoom.insert(pair<string, int> ("CM241", 1411));

    courseInstructor.insert(pair<string, string> ("CS101", "Haynes"));
    courseInstructor.insert(pair<string, string> ("CS102", "Alvarado"));
    courseInstructor.insert(pair<string, string> ("CS103", "Rich"));
    courseInstructor.insert(pair<string, string> ("NT110", "Burke"));
    courseInstructor.insert(pair<string, string> ("CM241", "Lee"));

    courseMeetingTime.insert(pair<string, string> ("CS101", "8:00 a.m."));
    courseMeetingTime.insert(pair<string, string> ("CS102", "9:00 a.m."));
    courseMeetingTime.insert(pair<string, string> ("CS103", "10:00 a.m."));
    courseMeetingTime.insert(pair<string, string> ("NT110", "11:00 a.m."));
    courseMeetingTime.insert(pair<string, string> ("CM241", "1:00 p.m."));

    string courseNumber;
    cout << "Enter a course number: ";
    cin >> courseNumber;

    if (courseRoom.count(courseNumber) > 0 ) {
        cout << "Room Number: " << courseRoom.at(courseNumber) << endl;
        cout << "Instructor: " << courseInstructor.at(courseNumber) << endl;
        cout << "Meeting Time: " << courseMeetingTime.at(courseNumber) << endl;
    } else {
        cout << "Course Number not found!" << endl;
    }

}