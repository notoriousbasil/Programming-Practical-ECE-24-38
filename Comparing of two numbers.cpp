#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is greater than %d\n", num2, num1);
    } else {
        printf("%d and %d are equal\n", num1, num2);
    }

    return 0;
}
