#include <stdio.h>

int main() {
    int n, i, term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) {
        term = 2 * i * i;
        printf("%d ", term);
    }
    printf("\n");
    return 0;
}
