//Q12.Write a program to input an integer and check whether it is positive, negative, or zero using nested if-else.
#include <stdio.h>
int main() {
    int num;
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    printf("--- Positive, Negative, or Zero Checker ---\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("\nResult: %d is a POSITIVE number.\n", num);
    } 
    else if (num < 0) {
        printf("\nResult: %d is a NEGATIVE number.\n", num);
    } 
    else {
        printf("\nResult: The number is ZERO.\n");
    }
     return 0;

}


