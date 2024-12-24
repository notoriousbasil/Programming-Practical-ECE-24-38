#include <stdio.h>

int main() {
    int rows, cols, i, j, matrix[10][10], transpose[10][10];

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < cols; ++i) {
        for (j = 0; j < rows; ++j) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; ++i) {
        for (j = 0; j < rows; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
