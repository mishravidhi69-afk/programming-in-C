#include <stdio.h>

int main() {
	printf("NameVidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int n, i, num, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to find frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }

    printf("Frequency of %d = %d\n", num, count);
    return 0;
}

