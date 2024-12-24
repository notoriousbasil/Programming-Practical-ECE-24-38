#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; ++i) {
        length++;
    }

    printf("Reverse of the string: ");
    for (i = length - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
