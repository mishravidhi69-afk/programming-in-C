//Q66:Write a program to insert an element into a sorted array at the appropriate position.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 11;
    int arr[11] = {10, 20, 40, 50, 60};
    int current_size = 5;
    int new_element, i, position = -1;

    printf("--- Insert into Sorted Array ---\n");
    printf("Original Sorted Array (Size %d): 10 20 40 50 60\n", current_size);
    printf("Enter the element to insert: ");
    scanf("%d", &new_element);

    if (current_size >= max_size) {
        printf("Error: Array is full.\n");
        return 1;
    }
    for (i = 0; i < current_size; i++) {
        if (arr[i] > new_element) {
            position = i;
            break;
        }
    }
    if (position == -1) {
        position = current_size;
    }
    for (i = current_size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = new_element;
    current_size++;
    printf("\nArray after insertion (Size %d): ", current_size);
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
