//Q52:Write a program to print an Inverted Star Pyramid.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int rows = 5; 
    int i, space, star;

    printf("--- Pattern Printer (Q52: Inverted Star Pyramid) ---\n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
