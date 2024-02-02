#include <iostream>

using namespace std;

class Complex {
public:
    // Default constructor
    Complex() : real(0), imaginary(0) {}

    // Parameterized constructor
    Complex(double realValue, double imaginaryValue)
        : real(realValue), imaginary(imaginaryValue) {}

    // Unary operator overloading (postfix ++)
    Complex operator++(int) {
        Complex temp = *this;
        this->real++;
        this->imaginary++;
        return temp;
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }

private:
    double real;
    double imaginary;
};

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.5, 2.5);

    cout << "Original value of a: ";
    a.display();

    // Using unary operator ++
    Complex c = a++;
    return 0;
}
