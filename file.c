#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // 1. Create and write to the file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    fprintf(file, "Hello, world!\n");
    fclose(file);
    printf("File created and initial content written.\n");

    // 2. Append to the file
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(file, "This is an appended line.\n");
    fclose(file);
    printf("Additional content appended to the file.\n");

    // 3. Read the file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Reading file content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}
