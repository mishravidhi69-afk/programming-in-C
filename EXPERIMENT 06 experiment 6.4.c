#include <stdio.h>

int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int m, n, p, q;
    printf("Enter order of matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter order of matrix B (p x q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\nMatrix multiplication not possible! (Incompatible orders)\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];
    int i, j, k;

    printf("\nEnter elements of matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter elements of matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrices
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }

    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }

    return 0;
}

