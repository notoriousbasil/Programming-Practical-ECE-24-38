#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("file.txt", "w"); // Open the file in write mode

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "This is a line of text written to the file.\n");

    fclose(fp); // Close the file

    printf("File written successfully!\n");

    return 0;
}
