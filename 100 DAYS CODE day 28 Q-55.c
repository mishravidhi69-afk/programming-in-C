//Q55:Write a program to print all the prime numbers from 1 to N.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int n, i, j, is_prime;

    printf("--- Prime Numbers Printer (1 to N) ---\n");
    printf("Enter the limit (N): ");
    
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("\nError: Please enter an integer greater than 1.\n");
        return 1;
    }

    printf("\nPrime numbers between 1 and %d are:\n", n);
    for (i = 2; i <= n; i++) {
        is_prime = 1;
        for (j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
 
