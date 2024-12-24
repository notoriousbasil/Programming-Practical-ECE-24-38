#include <stdio.h>

int main() {
    char ch;
    FILE *fp;

    fp = fopen("file.txt", "r"); // Open the file in read mode

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file:\n");
    whilec", ch);
    }

    fclose(fp); // Close the file

    return 0;
}
