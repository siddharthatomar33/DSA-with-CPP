#include <stdio.h>
#include <string.h>

// Define the structure
struct Employee {
    int empid;
    char name[50];
    float salary;
    int age;
};

int main() {
    struct Employee employees[50]; // Array of structures
    int i;

    // Input details for each employee
    for (i = 0; i < 50; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("EmpID: ");
        scanf("%d", &employees[i].empid);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }

    // Display employee details
    printf("Employee Details:\n");
    for (i = 0; i < 50; i++) {
        printf("Employee %d\n", i + 1);
        printf("EmpID: %d\n", employees[i].empid);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}