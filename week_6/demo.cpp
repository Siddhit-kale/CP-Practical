#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;
    int speed;

    void drive() {
        cout << brand << " is driving at " << speed << " km/h." << endl;
    }

    void stop() {
        cout << brand << " has stopped." << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.color = "Red";
    car1.speed = 80;

    Car car2;
    car2.brand = "Honda";
    car2.color = "Blue";
    car2.speed = 100;

    cout << "Car 1 is a " << car1.color << " " << car1.brand << "." << endl;
    car1.drive();
    car1.stop();

    cout << "\nCar 2 is a " << car2.color << " " << car2.brand << "." << endl;
    car2.drive();
    car2.stop();

    return 0;
}
