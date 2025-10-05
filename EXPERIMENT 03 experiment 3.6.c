/*Experiment 3: Conditional Statements
3.6. WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest per/*
*/
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int length[3], breadth[3], perimeter[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("Enter length and breadth of rectangle %d: ", i + 1);
        scanf("%d %d", &length[i], &breadth[i]);
        perimeter[i] = 2 * (length[i] + breadth[i]);
    
}
    int maxIndex = (perimeter[0] > perimeter[1]) ? 0 : 1;
    maxIndex = (perimeter[maxIndex] > perimeter[2]) ? maxIndex : 2;

    printf("Rectangle %d has the highest perimeter = %d\n", maxIndex + 1, perimeter[maxIndex]);

    return 0;
}
