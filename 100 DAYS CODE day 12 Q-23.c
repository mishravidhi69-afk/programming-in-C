//Q23: Calculate Library Fine
//Write a program to calculate the library fine based on late days as follows:
//First 5 days late: ?2/day
//Next 5 days late: ?3/day
//Next 20 days late: ?5/day
//More than 30 days: Membership Cancelled

#include<stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int late_days;
    float fine = 0.0;

    printf("--- Library Fine Calculator ---\n");
    printf("Enter the number of days the book is late: ");
    
    if (scanf("%d", &late_days) != 1 || late_days < 0) {
        printf("\nError: Please enter a valid non-negative number of days.\n");
        return 1;
    }

    printf("\n--- Calculation ---\n");

    if (late_days > 30) {
        printf("Membership Cancelled due to being more than 30 days late.\n");
    } 
    else if (late_days > 0) {
        int remaining_days = late_days;
        if (remaining_days > 10) {
            int days_at_5 = remaining_days - 10;
            if (days_at_5 > 20) {
                days_at_5 = 20;
            }
            fine += days_at_5 * 5.0;
            remaining_days -= days_at_5;
        }
        
        if (late_days > 5) {
            int days_at_3 = late_days > 10 ? 5 : (late_days - 5);
            fine += days_at_3 * 30;
        }
        
    
        if (late_days > 0) {
            int days_at_2 = late_days > 5 ? 5 : late_days;
            fine += days_at_2 * 2.0;
        }
        
        printf("Total days late: %d\n", late_days);
        printf("Total Fine to be paid: ?%.2f\n", fine);

    } 
    else {
        printf("Book returned on time. No fine.\n");
    }

    return 0;
}

