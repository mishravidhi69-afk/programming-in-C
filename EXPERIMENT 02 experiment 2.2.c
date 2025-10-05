/*Experiment 2: Operators
2.WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.*/
#include<stdio.h>
int main(){
	float c,t,f;
	 printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    printf("enter the temperture in c");
    scanf("%f",&c);
    t=9.0/5;
    f=(c * t)+32;
    printf("temperature in fahrenheit is %f",f);
    return 0;
    
}
