#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; ++i) {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
