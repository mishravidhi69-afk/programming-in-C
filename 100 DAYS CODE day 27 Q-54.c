//Q54:Write a program to print a Diamond Pattern (combining a pyramid and an inverted pyramid).
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int n = 4;
    int i, space, star;

    printf("--- Pattern Printer (Q54: Diamond) ---\n");
    printf("Enter the size of the half-diamond (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
