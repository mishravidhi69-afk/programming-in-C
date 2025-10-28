//Q113 — Kth Smallest Element
#include <stdio.h>

int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n--------------------------------------------------------------\n");

    int n, i, j, k, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (k > 0 && k <= n)
        printf("%dth smallest element: %d\n", k, arr[k - 1]);
    else
        printf("Invalid k value\n");

    return 0;
}

