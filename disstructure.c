#include <stdio.h>

// Define the structure to store distance
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;
    return result;
}

int main() {
    struct Distance dist1, dist2, result;

    // Input distances
    printf("Enter feet and inches for the first distance:\n");
    scanf("%d %f", &dist1.feet, &dist1.inches);

    printf("Enter feet and inches for the second distance:\n");
    scanf("%d %f", &dist2.feet, &dist2.inches);

    // Add distances
    result = addDistances(dist1, dist2);

    // Display result
    printf("Total distance: %d feet %.2f inches\n", result.feet, result.inches);

    return 0;
}
