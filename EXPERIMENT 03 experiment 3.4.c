/*Experiment 3 : Conditional Statement
3.4.WAP to check if three points (x1,y1),(x2,y2),(x3,y3) are collinear.*/
#include <stdio.h>
int main() {
	 printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float x1, x2, x3, y1, y2, y3, a; 
    printf("Enter x1,x2,x3,y1,y2,y3\n");
    scanf("%f,%f,%f,%f,%f,%f",&x1,&x2,&x3,&y1,&y2,&y3);
    a = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    if (a == 0.0) {
        printf("Collinear\n");
    } else {
        printf("Not Collinear\n");
    }
    
    return 0;
}
