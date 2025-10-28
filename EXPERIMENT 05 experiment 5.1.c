#include <stdio.h>
int globalVar = 10;
void display1() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    printf("Inside display1(): globalVar = %d\n", globalVar);
}
void display2() {
    printf("Inside display2(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);
    display1();
    display2();
    return 0;
}

