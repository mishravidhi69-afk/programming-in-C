 //Q32:Write a program to reverse a number.
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int num, original_num, remainder;
    int reversed_num = 0;

    printf("--- Number Reverser ---\n");
    printf("Enter an integer: ");
    
    if (scanf("%d", &num) != 1) {
        printf("\nError: Invalid input.\n");
        return 1;
    }
    
    original_num = num;
    while (num != 0) {
        remainder = num % 10;          
        reversed_num = reversed_num * 10 + remainder; 
        num /= 10;                      
    }

    printf("\nResult: The reverse of %d is %d\n", original_num, reversed_num);

    return 0;
}
