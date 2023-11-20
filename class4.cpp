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

    // Getter and Setter for name
    string getName() {
        return name;
    }

    void setName(string n) {
        name = n;
    }

    // Getter and Setter for age
    int getAge() {
        if (age >= 18 && age <= 25) {
            return age;
        } else {
            cout << "Invalid age detected. Please provide an age between 18 and 25." << endl;
            return -1; // Return a special value to indicate invalid age
        }
    }

    void setAge(int a) {
        age = a;
    }

    // Getter and Setter for gmail
    string getGmail() {
        return gmail;
    }

    void setGmail(string g) {
        gmail = g;
    }

    // Getter and Setter for gender
    bool getGender() {
        if (gender == true || gender == false) {
            return gender;
        } else {
            cout << "Invalid gender detected. Please specify as true for Male or false for Female." << endl;
            return false; // Return a special value to indicate invalid gender
        }
    }

    void setGender(bool gen) {
        gender = gen;
    }

    // Getter and Setter for id
    string getId() {
        return id;
    }

    void setId(string i) {
        id = i;
    }

    // Constructor
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

    void displayInfo() {
        cout << "name: " << name << ", age: " << age << ", gmail: " << gmail << ", gender: " << gender
             << ", id: " << id << ", height: " << height << ", weight: " << weight << ", color: " << color << endl;
    }

    bool isValidColor() {
        if (color == "black" || color == "white" || color == "green" || color == "blue") {
            return true;
        } else {
            cout << "Invalid color detected. Please choose from black, white, green, or blue." << endl;
            return false; // Return a special value to indicate invalid color
        }
    }
};

int main() {
    student rabeet("Abc", 18, "ydgyuw@gmail.com", true, "65gh", "white", 5.7, 67.0, "habits1");
    student anam("Xyz", 26, "ydgyuw@gmail.com", true, "445gh", "black", 9.8, 67.0, "habits2");

    rabeet.displayInfo();
    anam.displayInfo();

    int rabeetAge = rabeet.getAge();
    if (rabeetAge != -1) {
        cout << "Rabeet's age is: " << rabeetAge << endl;
    }

    bool rabeetGender = rabeet.getGender();
    if (rabeetGender != false) {
        cout << "Rabeet's gender is: " << (rabeetGender ? "Male" : "Female") << endl;
    }

    if (rabeet.isValidColor()) {
        cout << "Rabeet has a valid color preference." << endl;
    } else {
        cout << "Rabeet does not have a valid color preference." << endl;
    }

    return 0;
}
