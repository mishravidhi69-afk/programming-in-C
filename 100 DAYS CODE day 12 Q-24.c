//Q24: Calculate Electricity Bill
//Write a program to calculate the electricity bill based on the following rates (only the first rate is visible, so we'll assume a common slab structure):
//First 100 units: (The rate is missing, let's assume ?10/unit)
//Next 200 units (101-300): Assume ?15/unit
//Above 300 units: Assume ?20/unit
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int units;
    float bill_amount = 0.0;
    
    
    const int SLAB1_UNITS = 100;
    const float SLAB1_RATE = 10.0; 
    const int SLAB2_UNITS = 200;
    const float SLAB2_RATE = 15.0; 
    const float SLAB3_RATE = 20.0; 

    printf("--- Electricity Bill Calculator ---\n");
    printf("Enter the total units consumed: ");
    
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("\nError: Please enter a valid non-negative number of units.\n");
        return 1;
    }

    int remaining_units = units;
    if (remaining_units > (SLAB1_UNITS + SLAB2_UNITS)) {
        int units_in_slab3 = remaining_units - (SLAB1_UNITS + SLAB2_UNITS);
        bill_amount += units_in_slab3 * SLAB3_RATE;
        remaining_units -= units_in_slab3;
    }
    if (remaining_units > SLAB1_UNITS) {
        int units_in_slab2 = remaining_units - SLAB1_UNITS;
        bill_amount += units_in_slab2 * SLAB2_RATE;
        remaining_units -= units_in_slab2;
    }
    if (remaining_units > 0) {
        bill_amount += remaining_units * SLAB1_RATE;
    }

    printf("\n--- Bill Details ---\n");
    printf("Units Consumed: %d\n", units);
    printf("Total Bill Amount: ?%.2f\n", bill_amount);

    return 0;
}
