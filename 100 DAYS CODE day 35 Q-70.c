//Q70:Write a program to rotate an array to the right by K positions. (Assuming K=1 for simplicity, or taking K as input).
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size] = {10, 20, 30, 40, 50};
    int size = 5;
    int k = 1;
    int i, j;
    int last_element;

    printf("--- Array Right Rotation ---\n");
    printf("Current Array: 10 20 30 40 50\n");
    printf("Enter the number of positions (K) to rotate right: ");
    scanf("%d", &k);
    k = k % size;
    for (i = 0; i < k; i++) {
        last_element = arr[size - 1];
        for (j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        
        arr[0] = last_element;
    }
    printf("\nArray after %d right rotations: ", k);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
