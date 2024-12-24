#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; ++i) {
        for (j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);

    printf("Sorted array:\n");
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
