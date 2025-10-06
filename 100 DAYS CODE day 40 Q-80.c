//Q80:write a program to multiply two matrices (A \times B).
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 10;
    int A[max_size][max_size], B[max_size][max_size], C[max_size][max_size];
    int r1, c1, r2, c2, i, j, k;

    printf("--- Matrix Multiplication (A x B) ---\n");
    printf("Enter rows and columns for Matrix A (R1 C1): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B (R2 C2): ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("\nError: Cannot multiply. Columns of A (%d) must equal rows of B (%d).\n", c1, r2);
        return 1;
    }
    printf("Enter elements of Matrix A (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Matrix B (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++) { 
        for (j = 0; j < c2; j++) { 
            for (k = 0; k < c1; k++) { 
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResult Matrix (A x B) - Size %d x %d:\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

