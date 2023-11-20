#include <stdio.h>

void addNumbers(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, sum;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Declare pointers
    int *ptrNum1 = &num1;
    int *ptrNum2 = &num2;
    int *ptrSum = &sum;

    // Call the function to add numbers using pointers
    addNumbers(ptrNum1, ptrNum2, ptrSum);

    // Display the result
    printf("Sum: %d\n", *ptrSum);

    return 0;
}
