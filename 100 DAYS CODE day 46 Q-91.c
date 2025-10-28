#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name: Vidhi Mishra\nSAP ID: 590028001\nCourse: BCA\nBatch: B5\n\n");

    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String without vowels:\n");

    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            putchar(str[i]);
        }
    }

    return 0;
}
