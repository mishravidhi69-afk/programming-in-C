//experiment04:
//4.2 WAP to print the multiplication table of a number entered by the user.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int num, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d\n", num);
    printf("---------------------------\n");

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

