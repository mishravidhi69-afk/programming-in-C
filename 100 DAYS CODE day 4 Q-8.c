//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int n, sum = 0, i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}
