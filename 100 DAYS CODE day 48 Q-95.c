//Q95 — Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n----------------------------------------------------------------\n");

    char s1[100], s2[100], temp[200];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if (strlen(s1) != strlen(s2)) {
        printf("\n? Not Rotation (Different lengths)\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("\n? Strings are rotations of each other.\n");
    else
        printf("\n? Not rotations.\n");

    return 0;
}

