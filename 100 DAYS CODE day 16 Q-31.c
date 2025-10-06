//Q31:Write a program to take a number input and print its equivalent binary representation.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int decimal_num, temp_num, remainder;
    long long binary_num = 0;
    int i = 1;

    printf("--- Decimal to Binary Converter ---\n");
    printf("Enter a non-negative decimal integer: ");
    
    if (scanf("%d", &decimal_num) != 1 || decimal_num < 0) {
        printf("\nError: Please enter a non-negative integer.\n");
        return 1;
    }

    temp_num = decimal_num;
    
    while (temp_num != 0) {
        remainder = temp_num % 2;
        temp_num /= 2;
        binary_num += remainder * i; 
        i *= 10;
    }

    printf("\nResult: Binary representation of %d is %lld\n", decimal_num, binary_num);

    return 0;
	}
	
	
