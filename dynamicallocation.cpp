#include<iostream>
using namespace std;

int main() {
    // Dynamic memory allocation for an integer
    int *dynamicPtr = new int;

    // Assigning a value to the dynamically allocated memory
    *dynamicPtr = 42;

    // Accessing and printing the value
    cout << "Dynamically allocated value: " << *dynamicPtr << endl;

    // Deallocating the dynamically allocated memory
    delete dynamicPtr;

    return 0;
}





