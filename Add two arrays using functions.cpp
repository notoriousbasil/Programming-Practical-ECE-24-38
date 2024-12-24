#include <stdio.h>

void addArrays(int arr1[], int arr2[], int result[], int size) {
    int i;
    for (i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int arr1[100], arr2[100], result[100], size, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr2[i]);
    }

    addArrays(arr1, arr2, result, size);

    printf("Sum of arrays:\n");
    for (i = 0; i < size; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
