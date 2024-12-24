#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *ptr);
        ptr++; // Incrementing the pointer to point to the next element
    }
    printf("\n");

    return 0;
}
