#include <stdio.h>

int globalVar = 20;  
void testFunction() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int localVar = 50;
    printf("Inside testFunction(): localVar = %d\n", localVar);
    printf("Inside testFunction(): globalVar = %d\n", globalVar);
}

int main() {
    testFunction();
    printf("Outside function: globalVar = %d\n", globalVar);
    return 0;
}

