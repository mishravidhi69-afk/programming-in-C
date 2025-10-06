//Q58:Write a program to find the max and min in an array.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size];
    int size, i;
    int max_val, min_val;

    printf("--- Array Max and Min Finder ---\n");
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
    max_val = arr[0];
    min_val = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("\nResult:\n");
    printf("Maximum element: %d\n", max_val);
    printf("Minimum element: %d\n", min_val);

    return 0;
}
