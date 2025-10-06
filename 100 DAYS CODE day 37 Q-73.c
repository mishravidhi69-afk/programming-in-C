//Q73:Write a program to find the sum of rows and the sum of columns of a matrix.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 10;
    int matrix[max_size][max_size];
    int rows, cols, i, j;

    printf("--- Row and Column Sums ---\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    if (rows <= 0 || cols <= 0 || rows > max_size || cols > max_size) return 1;
    printf("Enter elements of the %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nRow Sums:\n");
    for (i = 0; i < rows; i++) {
        int row_sum = 0;
        for (j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, row_sum);
    }
    printf("\nColumn Sums:\n");
    for (j = 0; j < cols; j++) {
        int col_sum = 0;
        for (i = 0; i < rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, col_sum);
    }

    return 0;
}

