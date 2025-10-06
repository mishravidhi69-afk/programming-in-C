//Q68:Write a program to delete an element from an array.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size] = {10, 20, 30, 40, 50}; 
    int current_size = 5;
    int position, i;

    printf("--- Delete Element from Array ---\n");
    printf("Current Array: 10 20 30 40 50\n");
    
    printf("Enter the position (1 to %d) to delete: ", current_size);
    scanf("%d", &position);
    if (position < 1 || position > current_size) {
        printf("\nError: Invalid position.\n");
        return 1;
    }
    for (i = position - 1; i < current_size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    current_size--;
    printf("\nArray after deletion (Size %d): ", current_size);
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
