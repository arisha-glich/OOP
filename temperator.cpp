#include <iostream>

using namespace std;

class Temperature {
private:
    double value;
public:
    Temperature(double value) : value(value) {}

    bool operator>(const Temperature& other) {
        return this->value > other.value;
    }

    void display() const {
        cout << "Temperature: " << value << " degrees Celsius" << endl;
    }


};

int main() {
    Temperature t1(25.0);
    Temperature t2(20.0);

    if (t1 > t2) { // Operator Overloading for custom comparison
        cout << "Temperature t1 is higher than t2." << endl;
    } else {
        cout << "Temperature t1 is not higher than t2." << endl;
    }

    return 0;
}
