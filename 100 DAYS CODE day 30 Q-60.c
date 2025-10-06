//Q60:Write a program to count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size];
    int size, i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    printf("--- Positive/Negative/Zero Element Counter ---\n");
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
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("\nResult:\n");
    printf("Total Positive elements: %d\n", positive_count);
    printf("Total Negative elements: %d\n", negative_count);
    printf("Total Zero elements: %d\n", zero_count);

    return 0;
}
