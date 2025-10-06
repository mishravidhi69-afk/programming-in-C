//Q74:Write a program to find the transpose of a matrix.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 10;
    int matrix[max_size][max_size];
    int transpose[max_size][max_size];
    int rows, cols, i, j;

    printf("--- Matrix Transpose Finder ---\n");
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
   for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspose Matrix (%d x %d):\n", cols, rows);
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%5d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
