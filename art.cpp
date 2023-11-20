#include<iostream>
using namespace std;

class fashion {
public:
    int model;
    string name;  // Changed to string for names
private:
    string color;
    int dress;

public:
    // Getter and setter for name
    string getname() {
        if (name == "anum" || name == "bisma") {
            return name;
        } else {
            return "Invalid"; // Return a string for an invalid name
        }
    }
    void setname(string n) {
        name = n;
    }

    // Getter and setter for model
    int getmodel() {
        if (model >= 6 && model <= 9) {  // Corrected the condition
            return model;
        } else {
            return 0; // Assuming 0 is the default value for an invalid model
        }
    }
    void setmodel(int m) {
        model = m;
    }

    // Constructor
    fashion(int m, string n, string c, int d) {
        model = m;
        name = n;
        color = c;
        dress = d;
    }

    void display_info() {
        cout << "model:" << model << ", name:" << name << ", color:" << color << ", dress:" << dress << endl;
    }

    bool isvalid_color(string c) {
        return (c == "pink" || c == "green" || c == "yellow" || c == "black");
    }
};

int main() {
    fashion ART(5, "anum", "black", 1);
    fashion BRT(5, "bss", "black", 1);

    ART.display_info();
    cout << "Name: " << ART.getname() << endl;
    cout << "Model: " << ART.getmodel() << endl;

    return 0;
}
