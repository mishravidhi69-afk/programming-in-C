//Q36:Write a program to find the HCF (Highest Common Factor) or GCD (Greatest Common Divisor) of two numbers.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int num1, num2, hcf;

    printf("--- HCF (GCD) Calculator ---\n");
    printf("Enter first positive integer: ");
    scanf("%d", &num1);
    printf("Enter second positive integer: ");
    scanf("%d", &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("\nError: Please enter positive integers.\n");
        return 1;
    }
    int i;
    for (i = 1; i <= num1 && i <= num2; ++i) {
        
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; 
        }
    }

    printf("\nResult: The HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
