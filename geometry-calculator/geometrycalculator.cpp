#include <iostream>
using namespace std;
int main() {
    char choice;
    float radius;
    float PI = 3.14159;
    int length, width;
    float base, height;

    do {
        cout << "Geometry Calculator\n"
         << "   1. Calculate the Area of a Circle\n"
         << "   2. Calculate the Area of a Rectangle\n"
         << "   3. Calculate the Area of a Triangle\n"
         << "   4. Quit\n"
         << "   Enter your choice (1-4): ";
    
        cin >> choice;

        switch (choice)
        {
        case '1':
            cout << "Enter circle radius: ";
            cin >> radius;

            while (radius < 0) {
                cout << "Error: Invalid input. Please try again.\n";
                cout << "Enter circle radius: ";
                cin >> radius;
            }
            
            cout << "Area is " << radius * radius * PI << "\n\n";
            break;
        
        case '2':
            cout << "Enter length: ";
            cin >> length;
            while (length < 0) {
                cout << "Error: Invalid input. Please try again.\n";
                cout << "Enter length: ";
                cin >> length;
            }

            cout << "Enter width: ";
            cin >> width;
            while (width < 0) {
                cout << "Error: Invalid input. Please try again.\n";
                cout << "Enter width: ";
                cin >> width;
            }

            cout << "Areas is " << length * width << "\n\n";
            break;

        case '3':
            cout << "Enter length of base: ";
            cin >> base;
            while (base < 0) {
                cout << "Error: Invalid input. Please try again.\n";
                cout << "Enter length of base: ";
                cin >> base;
            }

            cout << "Enter height: ";
            cin >> height;
            while (height < 0) {
                cout << "Error: Invalid input. Please try again.\n";
                cout << "Enter height: ";
                cin >> height;
            }

            cout << "Area is " << base * height * .5 << "\n\n";
            break;
        
        case '4':
            break;

        default:
            cout << "Invalid selection. Please try again.\n";
        };

        if (choice == '4') break;
    } while (choice);

    return 0;
}