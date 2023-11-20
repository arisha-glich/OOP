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
        return age;
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
        return gender;
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
};

int main() {
    student rabeet("Abc", 18, "ydgyuw@gmail.com", true, "65gh", "5.7", 67.0, 67.0, "white");
    student anam("Xyz", 19, "ydgyuw@gmail.com", false, "445gh", "9.8", 67.0, 67.0, "brown");

    rabeet.displayInfo();
    anam.displayInfo();

    // Using setters for private attributes
    rabeet.setName("ar");
    rabeet.setAge(18);
    rabeet.setGender(true);

    cout << "\nUpdated Information for Rabeet:" << endl;
    rabeet.displayInfo();

    return 0;
}
