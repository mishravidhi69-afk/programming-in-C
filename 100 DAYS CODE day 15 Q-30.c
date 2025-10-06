//Q-30 Write a program to print the Fibonacci series up to N terms.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int n, i;
    int first = 0, second = 1, next;

    printf("--- Fibonacci Series Printer ---\n");
    printf("Enter the number of terms (N) for the series: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }

    printf("\nFibonacci Series (first %d terms):\n", n);

    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    
    printf("\n");

    return 0;
}
