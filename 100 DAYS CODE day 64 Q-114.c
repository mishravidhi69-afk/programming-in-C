//Q114 — Length of Longest Substring Without Repeating Characters
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n--------------------------------------------------------------\n");

    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int i, j, len = strlen(s);
    int maxLen = 0;

    for (i = 0; i < len; i++) {
        int visited[256] = {0};
        int currLen = 0;

        for (j = i; j < len; j++) {
            if (visited[(unsigned char)s[j]] == 1)
                break;
            visited[(unsigned char)s[j]] = 1;
            currLen++;
        }

        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}

