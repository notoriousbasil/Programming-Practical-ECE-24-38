#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2, sum, diff;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);
    diff = subtract(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);

    return 0;
}
