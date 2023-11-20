#include <iostream>
#include <string>

using namespace std;
//static int count=0;
class Student {
private:
    string name;
    int age;
    double* grade; // Pointer to a double (grade)

public:
    // Constructor with an optional parameter for initial grade
    Student(string name, int age, double *initialGrade = nullptr) {
        this->name = name;  // Initializing the 'name' member
        this->age = age;    // Initializing the 'age' member

        // Allocate memory for the grade dynamically if an initial grade is provided
        if (initialGrade != nullptr) 
        {
            this->grade = new double(*initialGrade);
            //count++;
        } else 
        {
            this->grade = nullptr;
        }
    }

    // Member function to set the grade using a pointer
    void setGrade(double* G) {
        grade = new double(*G);
        //count++;
        cout << "Grade set successfully." << endl;
    }

    // Getter function for the grade member with a condition
    double* getGrade() const {
        if (grade != nullptr) {
            return grade;
        } else {
            cout << "Invalid grade value. Returning nullptr." << endl;
            return nullptr;
        }
    }

    // Member function to display student information
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Student() {
        delete grade;
        //count++;
    }
};

int main() {
    // Create a Student object with an initial grade
    double initialGradeValue = 75.5;
    double* initialGradePtr = new double(initialGradeValue);
    //debugiing the code 
    //cout<<"initialgrade"<< initialGradePtr<<endl;
    Student student1("John Doe", 20, initialGradePtr);
   
     
    // Display student information
    student1.displayInfo();



    // Clean up memory
    delete initialGradePtr;

    return 0;
}
