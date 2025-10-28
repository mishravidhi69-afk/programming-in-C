#include <stdio.h>

int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    float population = 100000;   
    float rate = 0.10;           
    int year;

    printf("Year\tPopulation\n");

    for (year = 1; year <= 10; year++) {
    population = population + (population * rate); 
    printf("%d\t%.0f\n", year, population);         
    }

    return 0;
}

