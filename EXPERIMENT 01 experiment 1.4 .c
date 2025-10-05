/*Experiment 1: Installation,Environment Setup and starting with C language
4.write program to perform four arithmetic operations on two variables.*/
#include <stdio.h>
int main()
 {
    float n1,n2,add,sub,multi,div;
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    printf("Enter 1st number");
    scanf("%f",&n1);
    printf("Enter 2nd number");
    scanf("%f",&n2);
   add=n1+n2;
    sub=n1-n2;
    multi=n1*n2;
    div=n1/n2;
    printf("Add: %.2f+%.2f = %.2f\n",n1,n2,add);
    printf("Sub: %.2f-%.2f = %.2f\n",n1,n2,sub);
    printf("Multi: %.2f*%.2f = %.2f\n",n1,n2,multi);
    printf("Div: %.2f/%.2f = %.2f\n",n1,n2,div);
    return 0
}
