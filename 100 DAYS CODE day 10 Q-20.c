//Q20:Write a program to display the day of the week based on a number input (1 to 7) using switch-case.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int day_number;

    printf("--- Day of the Week Display (1=Mon, 7=Sun) ---\n");
    printf("Enter a number (1-7): ");
    
    if (scanf("%d", &day_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("\nResult: The day is ");
    
    switch (day_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
