//Q117 — Merge Two Sorted Arrays
#include <stdio.h>

int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n--------------------------------------------------------------\n");

    int m, n, i, j, k = 0;
    int arr1[100], arr2[100], merged[200];

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter %d elements (sorted): ", m);
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter %d elements (sorted): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < m)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];

    printf("Merged sorted array: ");
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}

