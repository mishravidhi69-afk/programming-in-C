//Q33:Write a program to check if a number is Palindrome. (A number that reads the same backward as forward).
#include <stdio.h>
int main() {
    int num, original_num, remainder;
    int reversed_num = 0;
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n")

    printf("--- Palindrome Number Checker ---\n");
    printf("Enter an integer: ");
    
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("\nError: Please enter a non-negative integer.\n");
        return 1;
    }

    original_num = num;
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    if (original_num == reversed_num) {
        printf("\nResult: %d is a PALINDROME number.\n", original_num);
    } else {
        printf("\nResult: %d is NOT a palindrome number.\n", original_num);
    }

    return 0;
}
