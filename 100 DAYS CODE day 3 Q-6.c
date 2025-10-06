//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\nFirst number = %d\nSecond number = %d\n", a, b);
    return 0;
}
