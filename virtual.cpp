#include <iostream>

class Vehicle {
public:
    virtual ~Vehicle() {}
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void drive() = 0;
};

class Car : virtual public Vehicle {
public:
    void specificCarFunction() {
        std::cout << "Specific function for Car\n";
    }
};

class Truck : virtual public Vehicle {
public:
    void specificTruckFunction() {
        std::cout << "Specific function for Truck\n";
    }
};

class Motorcycle : virtual public Vehicle {
public:
    void specificMotorcycleFunction() {
        std::cout << "Specific function for Motorcycle\n";
    }
};

class HybridCar : public Car, public Motorcycle {
public:
    void start() override {
        std::cout << "HybridCar starting\n";
    }

    void stop() override {
        std::cout << "HybridCar stopping\n";
    }

    void drive() override {
        std::cout << "HybridCar driving\n";
    }

    void specificHybridCarFunction() {
        std::cout << "Specific function for HybridCar\n";
    }
};

int main() {
    HybridCar hybridCar;
    hybridCar.start();
    hybridCar.drive();
    hybridCar.stop();

    hybridCar.specificCarFunction();
    hybridCar.specificMotorcycleFunction();
    hybridCar.specificHybridCarFunction();

    return 0;
}
