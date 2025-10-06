// Q25:Write a program to implement a simple calculator performing basic arithmetic operations (+, -, *, /) using switch-case.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    char operator;
    double num1, num2, result;

    printf("--- Simple Calculator (using switch-case) ---\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\nCalculation: %.2lf %c %.2lf = ", num1, operator, num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
                return 1; 
            }
            result = num1 / num2;
            printf("%.2lf\n", result);
            break;

        default:
            printf("Error! Invalid operator.\n");
            return 1; 
    }

    return 0;
}
