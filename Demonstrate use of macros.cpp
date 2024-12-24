#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) (x * x)

int main() {
    float radius = 5.0;
    int num = 4;

    float area = PI * radius * radius;
    int square = SQUARE(num);

    printf("Area of circle: %.2f\n", area);
    printf("Square of %d: %d\n", num, square);

    return 0;
}
