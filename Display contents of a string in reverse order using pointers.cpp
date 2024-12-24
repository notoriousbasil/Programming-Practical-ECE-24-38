#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the end of the string
    while (*ptr != '\0') {
        ptr++;
    }
    ptr--; // Move back to the last character

    printf("String in reverse: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
