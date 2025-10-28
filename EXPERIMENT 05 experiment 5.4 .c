#include <stdio.h>

void counterFunction() {
    static int count = 0;
    count++;
    printf("count = %d\n", count);
}

int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}

