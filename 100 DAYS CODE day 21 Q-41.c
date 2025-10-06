//Q41:Write a program to swap the first and last digit of a number.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int num, original_num, swapped_num;
    int first_digit, last_digit, digits_count = 0;
    int power_of_10;

    printf("--- Swap First and Last Digit ---\n");
    printf("Enter an integer: ");
    
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }

    original_num = num;
    last_digit = num % 10;
    int temp = num;
    while (temp != 0) {
        first_digit = temp % 10;
        temp /= 10;
        digits_count++;
    }
    if (digits_count <= 1) {
        swapped_num = original_num;
    } else {
        int middle_part = original_num / 10; 
        power_of_10 = pow(10, digits_count - 2);
        middle_part = middle_part % power_of_10;
        swapped_num = (last_digit * (int)pow(10, digits_count - 1)) + (middle_part * 10) + first_digit;
    }

    printf("\nOriginal Number: %d\n", original_num);
    printf("Swapped Number: %d\n", swapped_num);

    return 0;
}
