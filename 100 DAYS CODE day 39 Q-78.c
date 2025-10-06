//Q78:Write a program to find the sum of the main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 10;
    int matrix[max_size][max_size];
    int size, i, j;
    long long diagonal_sum = 0;

    printf("--- Main Diagonal Sum Calculator ---\n");
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &size);
    
    if (size <= 0 || size > max_size) return 1;
    printf("Enter elements of the %d x %d matrix:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diagonal_sum += matrix[i][j];
            }
        }
    }

    printf("\nResult: The sum of the main diagonal elements is %lld\n", diagonal_sum);

    return 0;
}
