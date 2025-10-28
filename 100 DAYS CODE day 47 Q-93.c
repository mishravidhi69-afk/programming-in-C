//Q93 — Check if two strings are anagrams of each other
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Name: Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n----------------------------------------------------------------\n");

    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for (int i = 0; str1[i]; i++)
        count1[tolower(str1[i])]++;

    for (int i = 0; str2[i]; i++)
        count2[tolower(str2[i])]++;

    int flag = 1;
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("\n? Strings are Anagrams.\n");
    else
        printf("\n? Strings are NOT Anagrams.\n");

    return 0;
}

