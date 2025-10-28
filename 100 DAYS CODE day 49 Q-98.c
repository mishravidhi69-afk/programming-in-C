//Q98 — Print initials + full surname
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n--------------------------------------------------------\n");

    char name[100];
    printf("Enter your full name: ");
    gets(name);

    int len = strlen(name);
    int lastSpace = -1;
    int i; // declare outside loop

    printf("\nFormatted Name: ");

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("%c. ", name[0]); // first initial

    for (i = 1; i < lastSpace; i++) {
        if (name[i - 1] == ' ')
            printf("%c. ", name[i]);
    }

    for (i = lastSpace + 1; i < len; i++) {
        printf("%c", name[i]);
    }

    return 0;
}
