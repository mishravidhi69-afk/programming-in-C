//Q64:Write a program to find the element that occurs the most (mode) in an array.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size];
    int size, i, j;
    int max_count = 0;
    int mode_element = -1;

    printf("--- Most Occurring Element Finder ---\n");
    printf("Enter the number of elements (N, max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > max_size) return 1;
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        int current_element = arr[i];
        int current_count = 0;
        for (j = 0; j < size; j++) {
            if (arr[j] == current_element) {
                current_count++;
            }
        }
        if (current_count > max_count) {
            max_count = current_count;
            mode_element = current_element;
        }
    }

    printf("\nResult: The most frequent element is %d, occurring %d times.\n", mode_element, max_count);

    return 0;
}
