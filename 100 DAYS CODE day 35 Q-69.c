//Q69:rite a program to find the second largest element in an array.
#include <stdio.h>
int main() {
    int max_size = 100;
    int arr[max_size];
    int size, i;
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    printf("--- Second Largest Element Finder ---\n");
    printf("Enter the number of elements (N, max 100): ");
    scanf("%d", &size);

    if (size < 2 || size > max_size) {
        printf("\nError: Need at least 2 elements.\n");
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest; 
            largest = arr[i];      
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; 
        }
    }

    printf("\nResult:\n");
    printf("Largest element: %d\n", largest);
    
    if (second_largest == INT_MIN) {
        printf("Second Largest element: Not found (all elements might be the same).\n");
    } else {
        printf("Second Largest element: %d\n", second_largest);
    }

    return 0;
}

