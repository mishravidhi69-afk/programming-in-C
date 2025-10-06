//Q38:Write a program to find the sum of the digits of a number.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int num, original_num, remainder, sum = 0;

    printf("--- Sum of Digits Calculator ---\n");
    printf("Enter a non-negative integer: ");
    
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("\nError: Please enter a non-negative integer.\n");
        return 1;
    }

    original_num = num;

    
    while (num != 0) {
        remainder = num % 10; 
        sum += remainder;    
        num /= 10;            
    }

    printf("\nResult: The sum of digits of %d is %d\n", original_num, sum);

    return 0;
	}
