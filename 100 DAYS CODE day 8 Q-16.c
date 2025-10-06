//Q16.Write a program to input three numbers and find the largest among them using if-else.Would you like me to continue by providing the C code for Day 9 and the questions associated with it?
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float num1, num2, num3;
    printf("--- Largest of Three Numbers Finder ---\n");
    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);
    printf("Number 3: ");
    scanf("%f", &num3);
    float largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    printf("\nResult: The largest number is %.2f\n", largest);
    return 0;
}
    
