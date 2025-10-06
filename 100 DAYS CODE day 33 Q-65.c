//Q65:Write a program to search a sorted array using Binary Search.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;
    int target, low, high, mid, found_at = -1;

    printf("--- Binary Search on Sorted Array ---\n");
    printf("Array: 10 20 30 40 50 60 70 80 90 100\n");
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            found_at = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    if (found_at != -1) {
        printf("\nResult: Element %d found at index %d (position %d).\n", target, found_at, found_at + 1);
    } else {
        printf("\nResult: Element %d not found in the array.\n", target);
    }

    return 0;
}

