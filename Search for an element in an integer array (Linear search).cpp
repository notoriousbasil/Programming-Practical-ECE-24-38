#include <stdio.h>

int main() {
    int arr[100], size, i, element, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (i = 0; i < size; ++i) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element found at index %d.\n", i);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
