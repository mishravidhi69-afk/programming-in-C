//Q71:Write a program to read and print a 2 \times 2 matrix (generalizing to R \times C).
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_rows = 10, max_cols = 10;
    int matrix[max_rows][max_cols];
    int rows, cols, i, j;

    printf("--- Matrix Reader and Printer ---\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    if (rows <= 0 || cols <= 0 || rows > max_rows || cols > max_cols) return 1;
    printf("Enter elements of the %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nYour %d x %d Matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%5d", matrix[i][j]); 
        }
        printf("\n");
    }

    return 0;
}





