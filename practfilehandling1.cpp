#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char f1[100], content[1000];

    // Ask the user for the filename
    printf("Enter the filename: \n");
    scanf("%s", f1);

    // Open the file for writing
    file = fopen(f1, "w");
    if (file == NULL) {
        printf("Error: could not open file \n");
        return 1;
    }
    // Ask the user for content to write into the file
    printf("Enter content to write into the file:\n");
    getchar(); // Clear the buffer
    fgets(content, sizeof(content), stdin);
    fprintf(file, "%s", content);
    fclose(file);

    // Open the file for reading
    file = fopen(f1, "r");
    if (file == NULL) {
        printf("Error: could not open file \n");
        return 1;
    }
    printf("Content of the file:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);

    // Open the file for appending
    file = fopen(f1, "a");
    if (file == NULL) {
        printf("Error: could not open file \n");
        return 1;
    }
    // Ask the user for content to append to the file
    printf("Enter content to append to the file:\n");
    getchar();
    fgets(content, sizeof(content), stdin);
    fprintf(file, "%s", content);
    fclose(file);

    return 0;
}
