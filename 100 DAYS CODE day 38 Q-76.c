//Q76:Write a program to check if a matrix is symmetric. (A square matrix where A[i][j] = A[j][i]).
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 10;
    int matrix[max_size][max_size];
    int size, i, j;
    int is_symmetric = 1; 
    printf("--- Symmetric Matrix Checker ---\n");
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &size);
    
    if (size <= 0 || size > max_size) return 1;
    printf("Enter elements of the %d x %d matrix:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) { 
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (is_symmetric == 0) break;
    }
    printf("\nResult: The matrix is ");
    if (is_symmetric) {
        printf("SYMMETRIC.\n");
    } else {
        printf("NOT SYMMETRIC.\n");
    }

    return 0;
}
