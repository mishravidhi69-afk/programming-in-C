//Q-26.Write a program to print numbers from 1 to N, where N is input by the user. (This is the start of the "Loops without Arrays/Strings" section).
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int n, i;

    printf("--- Number Printer (1 to N) ---\n");
    printf("Enter a positive integer N: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("\nError: Please enter a positive integer.\n");
        return 1;
    }

    printf("\nNumbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    printf("\n");

    return 0;
}
