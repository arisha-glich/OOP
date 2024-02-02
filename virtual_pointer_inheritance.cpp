#include <iostream>

class Base {
public:
    // Declare a virtual function to be overridden in the derived class
    virtual void display() {
        std::cout << "Base class display()" << std::endl;
    }
};

class Derived : public Base {
public:
    // Override the virtual function with a different implementation
    void display() override {
        std::cout << "Derived class display()" << std::endl;
    }
};

int main() {
    // Create an object of the Derived class using a pointer of the Base class
    Base* basePtr = new Derived();

    // Execute the display() function through the pointer
    basePtr->display(); // This will call the overridden function in the Derived class



    return 0;
}
