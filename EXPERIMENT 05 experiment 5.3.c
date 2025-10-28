#include <stdio.h>

int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int x = 10;
    printf("In main block: x = %d\n", x);

    { 
        int y = 20;
        printf("In inner block: x = %d, y = %d\n", x, y);
    }
    printf("Outside inner block: x = %d\n", x);

    return 0;
}

