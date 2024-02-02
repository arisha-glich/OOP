#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    // Default constructor
    Complex() : real(0), imaginary(0) {}

    // Parameterized constructor
    Complex(double realValue, double imaginaryValue)
        : real(realValue), imaginary(imaginaryValue) {}

    // Assignment operator overloading
    Complex& operator=(const Complex& other) {
        if (this != &other) { // Avoid self-assignment //(a!=d){}
            this->real = other.real; 
            this->imaginary = other.imaginary;
        }
        return *this;
    }

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = this->real + other.real;
        result.imaginary = this->imaginary + other.imaginary;
        return result;
    }

    void display() const {
        cout << real << " + " << imaginary << ""<< endl;
    }


};

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.5, 2.5);


    Complex d;
    d = a; // Assignment operator overloading

    cout << "Result after assignment: ";
    d.display();

    return 0;
}
