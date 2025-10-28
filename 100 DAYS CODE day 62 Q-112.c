//Q112 — Maximum Sum of Contiguous Subarray (Kadane’s Algorithm)
#include <stdio.h>

int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n--------------------------------------------------------------\n");

    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0], currSum = arr[0];
    for (i = 1; i < n; i++) {
        if (currSum + arr[i] > arr[i])
            currSum = currSum + arr[i];
        else
            currSum = arr[i];

        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum contiguous subarray sum: %d\n", maxSum);
    return 0;
}

