#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20; // Modifying the value through the pointer

    printf("Value of num after modification: %d\n", num);

    return 0;
}
