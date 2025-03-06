#include <stdio.h>

// Function to add two numbers using call by value
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5; // Example value for the first number
    int num2 = 10; // Example value for the second number
    int sum = 0; // Variable to store the result

    // Calling the function with values of the variables
    sum = addNumbers(num1, num2);

    // Printing the result
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

