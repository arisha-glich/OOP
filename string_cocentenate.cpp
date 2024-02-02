#include <iostream>
#include <string>

class MyString {
public:
    MyString(const std::string& value) : str(value) {}

    MyString operator+(const MyString& other) const {
        return MyString(this->str + other.str);
    }

    void display() const {
        std::cout << str << std::endl;
    }

private:
    std::string str;
};

int main() {
    MyString s1("Hello, ");
    MyString s2("world!");

    MyString result = s1 + s2; // Operator Overloading

    std::cout << "Concatenated String: ";
    result.display();

    return 0;
}
