/*Experiment 2:operators
3.write the c program to find the compound interest*/
#include <stdio.h>
#include <math.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float p, r, t, ci;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    ci = p * (pow(1 + r/100, t)) - p;
    printf("Compound Interest = %.2f", ci);
    return 0;
}
