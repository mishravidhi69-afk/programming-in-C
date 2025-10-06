//Q67:Write a program to insert an element into an array at a specific position.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size] = {10, 20, 30, 40, 50};
    int current_size = 5;
    int element, position, i;

    printf("--- Insert Element at Position ---\n");
    printf("Current Array: 10 20 30 40 50\n");
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    printf("Enter the position (1 to %d) to insert at: ", current_size + 1);
    scanf("%d", &position);
    if (position < 1 || position > current_size + 1 || current_size >= max_size) {
        printf("\nError: Invalid position or array is full.\n");
        return 1;
    }

       for (i = current_size; i >= position - 1; i--) {
        arr[i] = arr[i - 1];
}
    arr[position - 1] = element;
    current_size++;
    printf("\nArray after insertion (Size %d): ", current_size);
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
 
