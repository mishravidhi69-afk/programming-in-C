//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float radius, area, circumference;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius; 
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}
