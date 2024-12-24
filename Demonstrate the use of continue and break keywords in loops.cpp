#include <stdio.h>

int main() {
    // Using continue to skip even numbers
    printf("Even numbers skipped using continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // Using break to exit the loop after 5 iterations
    printf("Loop terminated after 5 iterations using break:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
        if (i == 5) {
            break;
        }
    }
    printf("\n");

    return 0;
}
