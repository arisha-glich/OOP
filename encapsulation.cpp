#include <iostream>

using namespace std;

class Shape {
protected:
    // Protected attributes (data)
    double width;
    double height;

public:
    // Public methods to interact with the object
    Shape(double w, double h) : width(w), height(h) {}

    // Getter methods
    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    // Setter methods
    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    // Public method to calculate and return the area
    double calculateArea() const {
        return width * height;
    }
};

// Derived class Rectangle inheriting from Shape
class Rectangle : public Shape {
public:
    // Constructor initializes base class and derived class attributes
    Rectangle(double w, double h) : Shape(w, h) {}

    // Public method to display the area (using protected members)
    void displayArea() const {
        cout << "Rectangle Area: " << calculateArea() << endl;
    }
};

int main() {
    // Creating an object of the derived class Rectangle
    Rectangle rectangle(4.0, 5.0);

    // Accessing and modifying attributes using getter and setter methods
    cout << "Initial Width: " << rectangle.getWidth() << endl;
    cout << "Initial Height: " << rectangle.getHeight() << endl;

    rectangle.setWidth(6.0);
    rectangle.setHeight(8.0);

    cout << "Updated Width: " << rectangle.getWidth() << endl;
    cout << "Updated Height: " << rectangle.getHeight() << endl;

    // Accessing the public method of the derived class
    rectangle.displayArea();

    return 0;
}
