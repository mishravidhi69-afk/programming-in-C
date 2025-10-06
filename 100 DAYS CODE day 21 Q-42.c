//Q42:Write a program to check if a number is a perfect number. (A number that is equal to the sum of its proper positive divisors, excluding the number itself. E.g., 6 = 1 + 2 + 3).
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int num, i;
    int sum_of_divisors = 0;

    printf("--- Perfect Number Checker ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    printf("\nDivisor Sum: %d\n", sum_of_divisors);
    if (sum_of_divisors == num) {
        printf("Result: %d is a PERFECT NUMBER.\n", num);
    } else {
        printf("Result: %d is NOT a perfect number.\n", num);
    }

    return 0;
}
