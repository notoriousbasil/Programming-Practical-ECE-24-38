#include <stdio.h>

int main() {
    int n, i, term = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= term;
    }
    printf("\n");
    return 0;
}
