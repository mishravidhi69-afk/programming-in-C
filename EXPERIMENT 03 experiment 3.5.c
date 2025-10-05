/*Experiment 3 : Conditional Statement
3.5.according to the gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include <stdio.h>
int is_leap(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int main() {
	 printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int year, total_days = 0, i, day;
    char* days_of_week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Please enter the year to find the day on 1st January: ");
    scanf("%d", &year);
    for (i = 1; i < year; i++) {
        if (is_leap(i))
            total_days += 366;
        else
            total_days += 365;
    }

    
    day = total_days % 7;

    printf("The day on 1st January %d is %s.\n", year, days_of_week[day]);
    printf("Thank you for using the program!\n");

    return 0;
}
