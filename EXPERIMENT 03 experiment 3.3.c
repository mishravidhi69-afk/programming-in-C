/*Experiment 3: Conditional Statements
3.3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI=Weight(kgs)/height(mts)*height(mts).*/
#include <stdio.h>
int main() {
	 printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
float w, h, bmi;
    printf("Enter weight(kg): ");
    scanf("%f", &w);
    printf("Enter height(m): ");
    scanf("%f", &h);

    bmi = w / (h*h);
    printf("BMI = %.2f\n", bmi);

    if(bmi < 18.5)
        printf("Underweight\n");
    else if(bmi < 25)
        printf("Normal\n");
    else if(bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}

