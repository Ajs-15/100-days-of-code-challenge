// Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add each element to sum
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
