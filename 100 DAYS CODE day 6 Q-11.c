//Q11.Write a program to input an integer and check whether it is even or odd using if-else.
#include <stdio.h>
int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
	int num;
    printf("--- Even or Odd Checker ---\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("\nResult: %d is an EVEN number.\n", num);
    } else {
        printf("\nResult: %d is an ODD number.\n", num);
    }
    return 0;
}

