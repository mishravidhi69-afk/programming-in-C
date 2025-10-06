Q77:Write a program to check if the diagonal elements of a square matrix are zero (i.e., a Skew-Symmetric Matrix check, or simply checking the main diagonal). We'll check the main diagonal.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 10;
    int matrix[max_size][max_size];
    int size, i, j;
    int diagonal_is_zero = 1; 
    printf("--- Main Diagonal Zero Checker ---\n");
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
        if (matrix[i][i] != 0) {
            diagonal_is_zero = 0;
            break;
        }
    }
    printf("\nResult: The main diagonal elements are ");
    if (diagonal_is_zero) {
        printf("ALL ZERO.\n");
    } else {
        printf("NOT ALL ZERO.\n");
    }

    return 0;
}

