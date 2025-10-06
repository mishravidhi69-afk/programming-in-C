//Q2:Write a program to input two numbers and display their sum, difference, product, and quotient. Division by zero should be handled carefully.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
        int num1, num2;
    int sum, difference, product;
    double quotient;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Difference: %d - %d = %d\n", num1, num2, difference);
    printf("Product: %d * %d = %d\n", num1, num2, product);
    printf("\n--- Results ---\n");
    
    if (num2 != 0) {

        quotient = (double)num1 / num2;
        printf("Quotient: %d / %d = %.2f\n", num1, num2, quotient);
    } else {
        printf("Quotient: Division by zero is not possible.\n");
    }

    return 0;
}

