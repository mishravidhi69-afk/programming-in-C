// Q28:Write a program to print the product of even numbers from 1 to N.
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	   printf("\n----------------------------------------------------------------\n");
    int n, i;
    long long product = 1; 

    printf("--- Product of Even Numbers (1 to N) ---\n");
    printf("Enter a positive integer N: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }

    
    for (i = 1; i <= n; i++) {
        
        if (i % 2 == 0) {
            product *= i;
        }
    }
    
    printf("\nResult: The product of even numbers up to %d is %lld\n", n, product);

    return 0;
}
