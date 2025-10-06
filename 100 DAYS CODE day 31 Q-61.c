//Q61:Write a program to search for an element in an array using Linear Search.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 100;
    int arr[max_size];
    int size, i, target, found_at = -1;

    printf("--- Linear Search ---\n");
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
    
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            found_at = i; 
            break;        
        }
    }
    if (found_at != -1) {
        printf("\nResult: Element %d found at index %d (position %d).\n", target, found_at, found_at + 1);
    } else {
        printf("\nResult: Element %d not found in the array.\n", target);
    }

    return 0;
}




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
