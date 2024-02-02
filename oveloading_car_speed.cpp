#include <iostream>

class Vehicle {
protected:
    int speed;

public:
    Vehicle(int s) : speed(s) {}

    // Overloading the '+' operator in the base class
    Vehicle operator+(const Vehicle& other) const {
        return Vehicle(this->speed + other.speed);
    }

    // Display function for demonstration
    void display() const {
        std::cout << "Speed: " << speed << " km/h\n";
    }
};

class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {}

    // Overloading the '+' operator in the derived class
    Car operator+(const Car& other) const {
        return Car(this->speed + other.speed);
    }

    // Display function for demonstration
    void display() const {
        std::cout << "Car Speed: " << speed << " km/h\n";
    }
};

int main() {
    Vehicle vehicle1(50);
    Vehicle vehicle2(30);

    Car car1(60);
    Car car2(40);

    // Using the overloaded '+' operator in the base class
    Vehicle resultVehicle = vehicle1 + vehicle2;
    resultVehicle.display(); // Output: Speed: 80 km/h

    // Using the overloaded '+' operator in the derived class
    Car resultCar = car1 + car2;
    resultCar.display(); // Output: Car Speed: 100 km/h

    // Mixing base and derived class objects
    Vehicle mixedResult = vehicle1 + car1;
    mixedResult.display(); // Output: Speed: 110 km/h

    return 0;
}
