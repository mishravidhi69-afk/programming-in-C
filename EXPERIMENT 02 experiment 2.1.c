/*Experiment 2: Operators
1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/
#include<stdio.h>
int main () {
	float length, width, perimeter, area ;
	   printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    printf("enter the length of the rectangle:" );
    scanf("%f", &length);
    printf("enter the width of the rectangle:");
    scanf("%f", &width);
    area = length * width;
    perimeter= 2 * (length + width);
    printf("Area of the rectangle = %.2f \n",area);
	printf("perimeter of the rectangle = %.2f\n",perimeter);
	return 0;   
} 

