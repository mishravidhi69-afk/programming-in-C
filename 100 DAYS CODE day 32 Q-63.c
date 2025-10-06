//Q63:Write a program to merge two arrays.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int max_size = 200;
    int arr1[100], arr2[100], merged_arr[max_size];
    int size1, size2, merged_size, i, j;

    printf("--- Array Merger ---\n");
    printf("Enter size of Array 1 (max 100): ");
    scanf("%d", &size1);
    if (size1 <= 0 || size1 > 100) return 1;
    printf("Enter %d elements for Array 1:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of Array 2 (max 100): ");
    scanf("%d", &size2);
    if (size2 <= 0 || size2 > 100) return 1;
    printf("Enter %d elements for Array 2:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    merged_size = size1 + size2;
    for (i = 0; i < size1; i++) {
        merged_arr[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        merged_arr[i + j] = arr2[j];
    }
    printf("\nMerged Array: ");
    for (i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}

