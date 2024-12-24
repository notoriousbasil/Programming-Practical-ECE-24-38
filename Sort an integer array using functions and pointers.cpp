#include <stdio.h>

void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {5, 2, 9, 1, 5};
    int size = 5;

    bubble_sort(arr, sized ", arr[i]);
    }
    printf("\n");

    return 0;
}
