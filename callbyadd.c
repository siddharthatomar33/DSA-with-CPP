#include <stdio.h>

// Function to add two numbers using call by address
void addNumbers(int *num1, int *num2, int c) {
    int c= *num1 + *num2;
}

int main() {
    int a = 5; // Example value for the first number
    int b = 10; // Example value for the second number
    int c; // Variable to store the result

    // Calling the function with pointers to the variable

    // Printing the result
    printf("The sum of %d and %d is\n", addNumbers(c,&a,&b));

    return 0;
}
