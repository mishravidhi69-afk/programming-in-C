//Q59:Write a program to count the total even and odd elements in an array. (Based on common curriculum for Q59/Q60 array grouping).
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size];
    int size, i;
    int even_count = 0;
    int odd_count = 0;

    printf("--- Even/Odd Element Counter ---\n");
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
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\nResult:\n");
    printf("Total Even elements: %d\n", even_count);
    printf("Total Odd elements: %d\n", odd_count);

    return 0;
}

