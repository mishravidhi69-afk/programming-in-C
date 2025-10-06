//Q19:Write a program to classify a triangle as equilateral, isosceles, or scalene given the lengths of its three sides.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float side1, side2, side3;

    printf("--- Triangle Classifier ---\n");
    printf("Enter the length of Side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of Side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of Side 3: ");
    scanf("%f", &side3);

    printf("\nResult: The triangle is ");
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("INVALID (The given side lengths cannot form a triangle).\n");
        return 0;
    }
    if (side1 == side2 && side2 == side3) {
        printf("EQUILATERAL.\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("ISOSCELES.\n");
    }
    else {
        printf("SCALENE.\n");
    }

    return 0;
}
