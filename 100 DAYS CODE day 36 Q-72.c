//Q72:Write a program to find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_rows = 10, max_cols = 10;
    int matrix[max_rows][max_cols];
    int rows, cols, i, j;
    long long sum = 0;

    printf("--- Matrix Sum Calculator ---\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    if (rows <= 0 || cols <= 0 || rows > max_rows || cols > max_cols) return 1;
    printf("Enter elements of the %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("\nResult: The sum of all elements in the matrix is %lld\n", sum);

    return 0;
}
