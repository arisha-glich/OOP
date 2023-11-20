#include <iostream>

using namespace std;

void checkEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote yet." << endl;
    }
}

int main() {
    int Age;
    cout << "Enter your age: ";
    cin >> Age;

    checkEligibility(Age);

    return 0;
}
