//Q34:Write a program to check if a number is an Armstrong number. (A number that is equal to the sum of its own digits each raised to the power of the number of digits).

#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int num, original_num, temp_num, remainder, n = 0;
    double sum = 0.0;

    printf("--- Armstrong Number Checker ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }

    original_num = num;
    temp_num = num;
    while (temp_num != 0) {
        temp_num /= 10;
        n++;
    }

    temp_num = num;
    while (temp_num != 0) {
        remainder = temp_num % 10;
        sum += pow(remainder, n);
        temp_num /= 10;
    }
    if (original_num == (int)sum) {
        printf("\nResult: %d is an ARMSTRONG number (order %d).\n", original_num, n);
    } else {
        printf("\nResult: %d is NOT an Armstrong number.\n", original_num);
    }

    return 0;
}

