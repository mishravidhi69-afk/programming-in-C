//Q18: Calculate Grade Based on Percentage.Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100 (Grade A), 80-89 (Grade B), 70-79 (Grade C), 60-69 (Grade D), Below 60 (Grade F).
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float percentage;

    printf("--- Student Grade Calculator ---\n");
    printf("Enter the student's percentage (0-100): ");
    scanf("%f", &percentage);
    if (percentage < 0 || percentage > 100) {
        printf("\nError: Invalid percentage. Please enter a value between 0 and 100.\n");
        return 1;
    }

    printf("\nResult: Percentage %.2f gets ", percentage);
    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
