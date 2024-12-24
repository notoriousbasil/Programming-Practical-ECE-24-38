#include <stdio.h>

int main() {
    char arr[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", arr);

    printf("Elements of the string:\n");
    for (i = 0; arr[i] != '\0'; ++i) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
