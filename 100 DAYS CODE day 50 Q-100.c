//Q100 — Print all substrings of a string
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n--------------------------------------------------------------\n");

    char str[200], rev[200];
    int i, j; 
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);
    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome!\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
