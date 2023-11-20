#include <iostream>
#include <cstring>

using namespace std;

class Person {
public:
    // Constructor
    Person(const char* name, int age) {
        // Allocate memory for the name and copy the input string
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);

        // Set the age
        this->age = age;
    }

    // Destructor to free allocated memory
    ~Person() {
        delete[] name;
    }

    // Function to display person details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

private:
    char* name;
    int age;
};

int main() {
    // Creating objects using pointers
    Person* person1 = new Person("John", 25);
    Person* person2 = new Person("Jane", 30);

    // Displaying person details using pointers
    cout << "Person 1: ";
    person1->display();

    cout << "Person 2: ";
    person2->display();

    // Deleting objects to free memory
    delete person1;
    delete person2;

    return 0;
}
