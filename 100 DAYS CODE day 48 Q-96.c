//Q96 — Reverse each word in a sentence without changing order
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n--------------------------------------------------------\n");

    char str[100];
    printf("Enter a sentence: ");
    gets(str);

    char *word_start = str;
    char *p; 

    for (p = str; *p != '\0'; p++) {
        if (*p == ' ') {
            reverse(word_start, p - 1);
            word_start = p + 1;
        }
    }

    reverse(word_start, p - 1);
    printf("\nReversed each word: %s\n", str);

    return 0;
}
