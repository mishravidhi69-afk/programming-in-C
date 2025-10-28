#include <stdio.h>

int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos = 0, neg = 0, even = 0, odd = 0;

    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nPositive numbers: %d", pos);
    printf("\nNegative numbers: %d", neg);
    printf("\nEven numbers: %d", even);
    printf("\nOdd numbers: %d\n", odd);

    return 0;
}

