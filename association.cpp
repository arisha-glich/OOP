#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    // Default constructor
    Car() : make(""), model(""), year(0) {}

    // Constructor for Car
    Car(const string& make, const string& model, int year)
        : make(make), model(model), year(year) {}

    // Getter methods for Car attributes
    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

class Person {
private:
    string name;
    int age;
    Car car;  // This represents the association between Person and Car

public:
    // Constructor for Person
    Person(const string& name, int age)
        : name(name), age(age), car() {} // Initializing car using the default constructor

    // Getter and setter methods for Person attributes
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // Getter and setter methods for the car association
    Car getCar() const {
        return car;
    }

    void setCar(const Car& car) {
        this->car = car;
    }
};

int main() {
    // Create instances of Person and Car
    Person person("John Doe", 25);
    Car car("Toyota", "Camry", 2022);

    // Get and print information
    cout << "Person: " << person.getName() << ", Age: " << person.getAge() << endl;
    cout << "Car: " << person.getCar().getYear() << " " << person.getCar().getMake() << " " << person.getCar().getModel() << endl;

    return 0;
}
