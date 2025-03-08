#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
    int a[ROWS][COLS], b[ROWS][COLS], result[ROWS][COLS];

    // Input elements of the first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply the matrices
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result matrix
    printf("\nResult of matrix multiplication:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
