/*Experiment 3: Conditional Statements
3.2. WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.*/
#include <stdio.h>
int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float a, b, c;
    printf("Enter 3 sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a) {
        if(a==b && b==c)
            printf("Equilateral\n");
        else if(a==b || b==c || a==c)
            printf("Isosceles\n");
        else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            printf("Right angled\n");
        else
            printf("Scalene\n");
    }
    else
        printf("Not a triangle\n");

    return 0;
}

