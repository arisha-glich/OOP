#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    string species;
    int age;
    double weight;
    string color;
    double height;

public:
    char gender;
    string habitat;
    string diet;
    string behavior;

    // Getter and Setter for age (private)
    int getAge() {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter and Setter for weight (private)
    double getWeight() {
        return weight;
    }

    void setWeight(double w) {
        weight = w;
    }

    // Getter and Setter for color (private)
    string getColor() {
        return color;
    }

    void setColor(string c) {
        color = c;
    }

    // Constructor
    Animal(string n, string sp, int a, double w, string c, double h, char g, string hab, string d, string beh) {
        name = n;
        species = sp;
        age = a;
        weight = w;
        color = c;
        height = h;
        gender = g;
        habitat = hab;
        diet = d;
        behavior = beh;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Species: " << species << ", Age: " << age << ", Weight: " << weight
             << ", Color: " << color << ", Height: " << height << ", Gender: " << gender << ", Habitat: " << habitat
             << ", Diet: " << diet << ", Behavior: " << behavior << endl;
    }

};

int main() {
    Animal lion("Simba", "Lion", 5, 200, "Golden", 4.5, 'M', "Savannah", "Carnivore", "Social");
    Animal dog("Rex", "Dog", 3, 30, "Brown", 1.2, 'M', "Home", "Omnivore", "Friendly");

    lion.displayInfo();
    dog.displayInfo();

    // Using getters and setters for private attributes
    lion.setAge(6);
    lion.setWeight(210.5);
    lion.setColor("Tawny");

    cout << "\nUpdated Information for Lion:" << endl;
    lion.displayInfo();

    return 0;
}
