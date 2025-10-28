//Q92 – First repeating lowercase alphabet
#include <stdio.h>
#include <string.h>

int main() {
printf("Name: Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
printf("\n----------------------------------------------------------------\n");
	char s[200];
    printf("Enter a lowercase string: ");
    scanf("%s", s);

    int seen[26] = {0};
    for (int i = 0; s[i]; i++) {
        int idx = s[i] - 'a';
        if (seen[idx]) {
            printf("First repeating lowercase letter: %c\n", s[i]);
            return 0;
        }
        seen[idx] = 1;
    }
    printf("No repeating lowercase letter found.\n");
    return 0;
}


