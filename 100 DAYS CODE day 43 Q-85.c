//Q85: Reverse a string.
#include <stdio.h>
void reverseString(char str[]) {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    int length = 0;
    int i = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

