
#include <stdio.h>

int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int a, b, c, d;
    int L;

    printf("Enter the limit for cubes (e.g. 20): ");
    scanf("%d", &L);

    printf("Ramanujan Numbers up to limit %d:\n", L);
    for (a = 1; a <= L; a++) {
    for (b = a; b <= L; b++) {
    for (c = a + 1; c <= L; c++) {
    for (d = c; d <= L; d++) {	
    if ((a*a*a + b*b*b) == (c*c*c + d*d*d)) {
    printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
	a*a*a + b*b*b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

