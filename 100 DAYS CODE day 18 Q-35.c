//Q35:Write a program to print all factors of a given number.
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n")
    int num, i;

    printf("--- Factor Printer ---\n");
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }

    printf("\nResult: The factors of %d are:\n", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");

    return 0;
}
//Q36:Write a program to find the HCF (Highest Common Factor) or GCD (Greatest Common Divisor) of two numbers.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n")
    int num1, num2, hcf;

    printf("--- HCF (GCD) Calculator ---\n");
    printf("Enter first positive integer: ");
    scanf("%d", &num1);
    printf("Enter second positive integer: ");
    scanf("%d", &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("\nError: Please enter positive integers.\n");
        return 1;
    }
    int i;
    for (i = 1; i <= num1 && i <= num2; ++i) {
        
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; 
        }
    }

    printf("\nResult: The HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
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
//Q38:Write a program to find the sum of the digits of a number.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n")
    int num, original_num, remainder, sum = 0;

    printf("--- Sum of Digits Calculator ---\n");
    printf("Enter a non-negative integer: ");
    
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("\nError: Please enter a non-negative integer.\n");
        return 1;
    }

    original_num = num;

    
    while (num != 0) {
        remainder = num % 10; 
        sum += remainder;    
        num /= 10;            
    }

    printf("\nResult: The sum of digits of %d is %d\n", original_num, sum);

    return 0;
	}
	//Q39:Write a program to find the product of all digits of a number.
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n")
    int num, original_num, remainder;
    long long product = 1; 

    printf("--- Product of Digits Calculator ---\n");
    printf("Enter a non-negative integer: ");
    
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("\nError: Please enter a non-negative integer.\n");
        return 1;
    }

    original_num = num;
    if (num == 0) {
        product = 0;
    } else {
        while (num != 0) {
            remainder = num % 10; 
            product *= remainder;
            num /= 10;            
        }
    }

    printf("\nResult: The product of digits of %d is %lld\n", original_num, product);

    return 0;
}
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
