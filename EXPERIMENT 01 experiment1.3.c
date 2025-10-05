/*Experiment 1: Installation,Environment Setup and starting with C language
3.Write a C program to add two number and take numbers from the user.*/

#include <stdio.h>
int main() {
    int n1,n2,sum;
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    printf("Enter first number");
    scanf("%d",&n1);
	printf("Enter Second number.");
	scanf("%d",&n2); 
    sum = n1 + n2;
    printf("Sum of %d and %d is : %d\n", n1 , n2 , sum);
    return 0;
}
