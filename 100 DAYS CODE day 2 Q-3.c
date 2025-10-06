//Q3:Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;

    perimeter = 2 * (length + breadth);

    printf("\n--- Rectangle Calculations ---\n");
    printf("Area: %.2f square units\n", area);
    printf("Perimeter: %.2f units\n", perimeter);

    return 0;
}
