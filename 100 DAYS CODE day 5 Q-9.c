//Q-9.Calculate Simple and Compound Interest.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float principal, rate, time, simpleInterest, compoundInterest, amount;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("\n--- Interest Calculation ---\n");
    printf("Principal Amount = %.2f\n", principal);
    printf("Rate of Interest = %.2f%%\n", rate);
    printf("Time Period = %.2f years\n", time);
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
