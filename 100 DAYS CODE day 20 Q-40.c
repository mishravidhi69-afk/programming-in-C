//Q-40:Write a program to find the decimal equivalent of a binary number and print it.

#include <math.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    long long binary_num, temp_num;
    int decimal_num = 0, remainder;
    int i = 0;

    printf("--- Binary to Decimal Converter ---\n");
    printf("Enter a binary number (0s and 1s only): ");
    
    if (scanf("%lld", &binary_num) != 1 || binary_num < 0) {
        printf("\nError: Please enter a non-negative binary number.\n");
        return 1;
    }

    temp_num = binary_num;
    while (temp_num != 0) {
        remainder = temp_num % 10;
        decimal_num += remainder * pow(2, i); 
        
        temp_num /= 10; 
        i++;           
    }

    printf("\nResult: Decimal equivalent of %lld is %d\n", binary_num, decimal_num);

    return 0;
}
