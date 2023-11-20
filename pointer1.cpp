#include<iostream>
using namespace std;

int main() {
    // Example 1: Basic Pointer Usage

    int x = 10;
    int *ptr = &x; // Pointer pointing to the address of x

    // Accessing the value using the pointer
    cout << "Value of x: " << *ptr << endl;

    // Modifying the value using the pointer
    *ptr = 20;
    cout << "Modified value of x: " << x << endl;

    // Example 2: Array and Pointer

    int numbers[] = {1, 2, 3, 4, 5};
    int *arrPtr = numbers; // Pointer pointing to the first element of the array

    // Accessing array elements using the pointer without a loop
    cout << "Array elements using pointer: ";
    cout << *arrPtr << " " << *(arrPtr + 1) << " " << *(arrPtr + 2) << " " << *(arrPtr + 3) << " " << *(arrPtr + 4) << endl;

    return 0;
}
