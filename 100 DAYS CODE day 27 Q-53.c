//Q53:Write a program to print a Hollow Square Pattern.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int size = 5;
    int i, j;

    printf("--- Pattern Printer (Q53: Hollow Square) ---\n");
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

