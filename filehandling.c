#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];
    FILE *fptr1, *fptr2;
    char c;

    printf("Enter the filename to open for reading: ");
    scanf("%s", filename);

    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s\n", filename);
        exit(1);
    }

    printf("Enter the filename to open for writing: ");
    scanf("%s", filename);

    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s\n", filename);
        fclose(fptr1);
        exit(1);
    }

    // Read contents from file
    while ((c = fgetc(fptr1)) != EOF)
    {
        fputc(c, fptr2);
    }

    printf("Contents copied to %s\n", filename);

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
