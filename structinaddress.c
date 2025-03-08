#include <stdio.h>

// Structure to store address details
struct Address {
    char street[50];
    char city[50];
    int pin;
};

// Structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    struct Address address; // Nested structure
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter street: ");
    scanf("%s", student.address.street);

    printf("Enter city: ");
    scanf("%s", student.address.city);

    printf("Enter pin: ");
    scanf("%d", &student.address.pin);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Address: %s, %s, %d\n", student.address.street, student.address.city, student.address.pin);

    return 0;
}
