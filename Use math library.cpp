#include <stdio.h>
#include <math.h>

int main() {
    double num, square, cube, sqrt_num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    square = pow(num, 2);
    cube = pow(num, 3);
    sqrt_num = sqrt(num);

    printf("Square of %.2lf: %.2lf\n", num, square);
    printf("Cube of %.2lf: %.2lf\n", num, cube);
    printf("Square root of %.2lf: %.2lf\n", num, sqrt_num);
    return 0;
}
