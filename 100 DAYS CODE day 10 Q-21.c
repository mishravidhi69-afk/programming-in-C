//Q21:Write a program to display the month name using switch-case for a given number (1-12).
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int month_number;

    printf("--- Month Name Display ---\n");
    printf("Enter a number (1 for January, 12 for December): ");
    if (scanf("%d", &month_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\nResult: The month is ");

    switch (month_number) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid Month Number! Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
