#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // strlen() example
    strcpy(str1, "Hello");
    printf("Length of str1: %lu\n", strlen(str1));

    // strcpy() example
    strcpy(str2, str1);
    printf("str2 after strcpy(): %s\n", str2);

    // strrev() example
    printf("str1 in reverse: %s\n", strrev(str1)); 

    // strcat() example
    strcat(str1, " world!");
    printf("str1 after strcat(): %s\n", str1);

    // strcmp() example
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    return 0;
}
