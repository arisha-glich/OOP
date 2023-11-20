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
            return -1;
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
          if (gender == 'F'|| gender == 'M') {
            return true;
        } else {
            return false;
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
    //name: Abc, age: 18, gmail: ydgyuw@gmail.com, gender: 1, id: 65gh, height: 5.7, weight: 67, color: habits1

    bool isValidColor(string color) {
        if (color == "black" || color == "white" || color == "green" || color == "blue") {
            return true;  //1
        } else {
            return false;  //0
        }
    }
};

int main() {
    string color;
    student rabeet("Abc", 18, "ydgyuw@gmail.com", true, "65gh", "Red", 5.7, 67.0, "habits1");
    student anam("Xyz", 19, "ydgyuw@gmail.com", true, "445gh", "black", 9.8, 67.0, "habits2");

    rabeet.displayInfo();
    anam.displayInfo();

    (anam.isValidColor(color));

    return 0;
}
