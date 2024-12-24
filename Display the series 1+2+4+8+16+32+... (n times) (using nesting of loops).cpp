#include <stdio.h>

int main() {
    int n, i, j, sum = 0, term = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += term;
        term *= 2;
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}
