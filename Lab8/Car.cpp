#include <iostream>
using namespace std;

class Car {
    private:
        int yearModel;
        string make;
        int speed;
    public:
        Car(int year, string m) {
            yearModel = year;
            make = m;
            speed = 0;
        }

        // Accessor functions
        int getYearModel();
        string getMake();
        int getSpeed();

        void accelerate();
        void brake();
};

int Car::getYearModel() {
    return yearModel;
}

string Car::getMake() {
    return make;
}

int Car::getSpeed() {
    return speed;
}

void Car::accelerate() {
    speed += 5;
}

void Car::brake() {
    speed -= 5;
}

int main() {
    Car car(2020, "Toyota");

    for (int i = 0; i < 5; i++) {
        car.accelerate();
        cout << "Accelerating .... Speed: " << car.getSpeed() << "mph" << endl;
    }

    for (int i = 0; i < 5; i++) {
        car.brake();
        cout << "Braking .... Speed: " << car.getSpeed() << "mph" << endl;
    }
}