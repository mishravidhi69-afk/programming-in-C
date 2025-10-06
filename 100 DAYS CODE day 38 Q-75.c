//Q75:Write a program to add two matrices.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 10;
    int A[max_size][max_size], B[max_size][max_size], C[max_size][max_size];
    int rows, cols, i, j;

    printf("--- Matrix Addition (A + B) ---\n");
    printf("Enter number of rows (R): ");
    scanf("%d", &rows);
    printf("Enter number of columns (C): ");
    scanf("%d", &cols);
    
    if (rows <= 0 || cols <= 0 || rows > max_size || cols > max_size) return 1;
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nResult Matrix (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

