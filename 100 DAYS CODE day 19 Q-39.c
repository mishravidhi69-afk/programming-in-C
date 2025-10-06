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

