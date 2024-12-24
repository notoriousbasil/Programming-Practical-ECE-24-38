#include <stdio.h>

int main() {
    int n, i;
    float term = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += term;
        term /= 2;
    }

    printf("Sum of the series: %.2f\n", sum);
    return 0;
}
