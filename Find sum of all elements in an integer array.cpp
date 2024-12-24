#include <stdio.h>

int main() {
    int arr[100], size, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
