//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\nFirst number = %d\nSecond number = %d\n", a, b);
    return 0;
}
