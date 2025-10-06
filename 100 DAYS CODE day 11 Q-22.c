//Q22:Write a program to find profit or loss percentage given the cost price (CP) and selling price (SP).
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float cost_price, selling_price, difference, percentage;

    printf("--- Profit/Loss Percentage Calculator ---\n");
    printf("Enter Cost Price (CP): ");
    scanf("%f", &cost_price);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &selling_price);
    if (cost_price <= 0) {
        printf("\nError: Cost Price must be greater than zero.\n");
        return 1; 
    }

    difference = selling_price - cost_price;

    printf("\n--- Results ---\n");
    
    
    if (difference > 0) {
        percentage = (difference / cost_price) * 100;
        printf("PROFIT occurred.\n");
        printf("Profit Amount: %.2f\n", difference);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } 
    
    else if (difference < 0) { 
    
        float loss_amount = -difference; 
        percentage = (loss_amount / cost_price) * 100;
        printf("LOSS occurred.\n");
        printf("Loss Amount: %.2f\n", loss_amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } 
    else { 
        printf("NO PROFIT, NO LOSS (Break-Even).\n");
        printf("Profit/Loss Percentage: 0.00%%\n");
    }

    return 0;
}
