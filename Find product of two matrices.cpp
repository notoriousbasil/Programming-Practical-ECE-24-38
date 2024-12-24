#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j, k, matrix1[10][10], matrix2[10][10], product[10][10];

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 1; // Indicate an error
    }

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols1; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; ++i) {
        for (j = 0; j < cols2; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            product[i][j] = 0;
            for (k = 0; k < cols1; ++k) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
53. Swap two numbers using call-by-value method:

C

#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
