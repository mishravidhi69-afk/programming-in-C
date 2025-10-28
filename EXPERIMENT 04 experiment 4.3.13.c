#include <stdio.h>
int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int i, j, k;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j < i; j++)
            printf("  ");
        for(k = 5; k >= i; k--)
            printf("%d ", k);
        
        printf("\n");
    }
    return 0;
}
