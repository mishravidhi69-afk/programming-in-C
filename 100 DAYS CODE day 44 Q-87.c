//Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    char str[100];
    int spaces = 0;
    int digits = 0;
    int special = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isspace(ch)) {
            spaces++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (isalnum(ch)) {
        } else {
            special++;
        }
    }
    if (spaces > 0) {
        spaces--;
    }


    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}

