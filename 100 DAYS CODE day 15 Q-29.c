//Q29:Write a program to calculate the factorial of N.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int n, i;
    unsigned long long factorial = 1; 

    printf("--- Factorial Calculator ---\n");
    printf("Enter a non-negative integer N: ");
    
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("\nError: Please enter a non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("\nResult: Factorial of 0 is 1\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("\nResult: Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}

