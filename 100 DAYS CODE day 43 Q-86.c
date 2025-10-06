//Q86: Check if a string is a palindrome.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    char str[100];
    int length = 0;
    int isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("The string is a PALINDROME.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
