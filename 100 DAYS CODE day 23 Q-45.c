//Q45:Write a program to find the sum of the series 2/1 + 3/2 + 4/3 + \ldots up to N terms. The i^{th} term is (i+1)/i.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int n, i;
    double sum = 0.0;

    printf("--- Series Sum Calculator (2/1 + 3/2 + 4/3 + ...) ---\n");
    printf("Enter the number of terms (N): ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("\nError: Please enter a positive integer for N.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        double term = (double)(i + 1) / i; 
        sum += term;
    }

    printf("\nResult: The sum of the series up to %d terms is %.4lf\n", n, sum);

    return 0;
}
