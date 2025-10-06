//Q27:Write a program to print the sum of the first N numbers.
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int n, i, sum = 0;

    printf("--- Sum of First N Numbers ---\n");
    printf("Enter a positive integer N: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("\nResult: The sum of the first %d numbers is %d\n", n, sum);

    return 0;
}
   

