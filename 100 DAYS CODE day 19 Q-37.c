// Q37:Write a program to find the LCM (Least Common Multiple) of two numbers.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n")
    int num1, num2, max, lcm;

    printf("--- LCM Calculator ---\n");
    printf("Enter first positive integer: ");
    scanf("%d", &num1);
    printf("Enter second positive integer: ");
    scanf("%d", &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("\nError: Please enter positive integers.\n");
        return 1;
    }
    max = (num1 > num2) ? num1 ; num2;
    for (lcm = max; ; lcm += max) {
        
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }

    printf("\nResult: The LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

