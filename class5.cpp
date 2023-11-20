#include<iostream>
#include<string>
using namespace std;

class student {
private:
    string name;
    int age;
    string gmail;
    bool gender;
    string id;

public:
    string color;
    float height;
    float weight;
    string habits;

    // Default constructor
    student() {
        name = "";
        age = 0;
        gmail = "";
        gender = false;
        id = "";
        habits = "";
        height = 0.0;
        weight = 0.0;
        color = "";
    }

    // Parameterized constructor
    student(string n, int a, string g, bool gen, string i, string h, float hei, float w, string c) {
        name = n;
        age = a;
        gmail = g;
        gender = gen;
        id = i;
        habits = h;
        height = hei;
        weight = w;
        color = c;
    }

    // Copy constructor
    student(const student & other) {
        name = other.name;
        age = other.age;
        gmail = other.gmail;
        gender = other.gender;
        id = other.id;
        habits = other.habits;
        height = other.height;
        weight = other.weight;
        color = other.color;
    }

    // Destructor
    ~student() {
        cout << "Destructor called for student " << name << endl;
    }

    // Display method
    void displayInfo() {
        cout << "name: " << name << ", age: " << age << ", gmail: " << gmail << ", gender: " << gender
             << ", id: " << id << ", height: " << height << ", weight: " << weight << ", color: " << color << endl;
    }

    // Validation method
    bool isValidColor(string color) {
        if (color == "black" || color == "white" || color == "green" || color == "blue") {
            return true;
        } else {
            return false;
        }
    }
};

int main() {

    {
        // Using parameterized constructor
        student rabeet("Abc", 18, "ydgyuw@gmail.com", true, "65gh", "Red", 5.7, 67.0, "habits1");
        rabeet.displayInfo();
    } // Destructor called when rabeet goes out of scope
     {
        // Using default constructor
        student defaultStudent;
        defaultStudent.displayInfo();
    } // Destructor called when defaultStudent goes out of scope

    {
        // Using copy constructor
        student anam = student("Xyz", 19, "ydgyuw@gmail.com", true, "445gh", "black", 9.8, 67.0, "habits2");
        anam.displayInfo();
    } // Destructor called when anam goes out of scope

    {
        // Using empty constructor
    } // Destructor called when emptyStudent goes out of scope


    // Destructor for defaultStudent, rabeet, anam, and emptyStudent have already been called at this point
   
    return 0;
}
