#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    Animal(const string name, int age) : name(name), age(age) {}

    // Getter functions
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // Setter functions
    void setName(const string newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void eat() const {
        cout << name << " is eating." << endl;
    }

    void sleep() const {
        cout << name << " is sleeping." << endl;
    }

    void makeSound() const {
        cout << "Animal sound." << endl;
    }

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Dog : public Animal {
private:
    string breed;

public:
    Dog(const string name, int age, const string breed) : Animal(name, age), breed(breed) {}

    // Getter function specific to Dog
    string getBreed() const {
        return breed;
    }

    // Setter function specific to Dog
    void setBreed(const string newBreed) {
        breed = newBreed;
    }

    void bark() const {
        cout << "Woof! Woof!" << endl;
    }

    void displayInfo() const {
        Animal::displayInfo();
        cout << "Breed: " << breed << endl;
    }
};

class Cat : public Animal {
private:
    bool claws;

public:
    Cat(const string name, int age, bool hasClaws) : Animal(name, age), claws(hasClaws) {}

    // Getter function specific to Cat
    bool hasClaws() const {
        return claws;
    }

    // Setter function specific to Cat
    void setHasClaws(bool has) {
        claws = has;
    }

    void meow() const {
        cout << "Meow! Meow!" << endl;
    }


    void displayInfo() const {
        Animal::displayInfo();
        cout << "Has Claws: " << (claws ? "Yes" : "No") << endl;
    }
};

class Sphered : public Dog, public Cat {
public:
    Sphered(const string name, int age, const string breed, bool hasClaws)
        : Dog(name, age, breed), Cat(name, age, hasClaws) {}

    void displayInfo() const {
        Dog::displayInfo();
        Cat::displayInfo();
    }
};

int main() {
    Sphered mySphered("Sphered", 5, "Mixed Breed", true);

    mySphered.displayInfo();
    mySphered.bark();
    mySphered.meow();

    return 0;
}
