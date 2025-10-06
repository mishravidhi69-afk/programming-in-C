//Q57:Write a program to sum the array elements.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size];
    int size, i;
    long long sum = 0;

    printf("--- Array Sum Calculator ---\n");
    printf("Enter the number of elements (N, max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > max_size) {
        printf("\nError: Invalid size entered.\n");
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("\nResult: The sum of all elements is %lld\n", sum);

    return 0;
}

