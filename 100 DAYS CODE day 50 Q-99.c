//Q99 — Change date format (dd/04/yyyy ? dd-Apr-yyyy)
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n----------------------------------------------------------------\n");

    char date[20], month[3], monthName[12][4] =
        {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    int day, mm, year;
    sscanf(date, "%d/%d/%d", &day, &mm, &year);

    printf("\nFormatted Date: %02d-%s-%d\n", day, monthName[mm - 1], year);
    return 0;
}

