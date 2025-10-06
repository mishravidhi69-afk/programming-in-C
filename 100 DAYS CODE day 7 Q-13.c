//Q13.Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int year;
    printf("--- Leap Year Checker ---\n");
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("\nResult: %d is a LEAP YEAR.\n", year);
    } else {
        printf("\nResult: %d is NOT a leap year.\n", year);
    }
    return 0;
}

