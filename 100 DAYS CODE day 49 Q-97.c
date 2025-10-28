// Q97 — Print initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch - B5");
    printf("\n----------------------------------------------------------------\n");

    char name[100];
    printf("Enter your full name: ");
    gets(name);

    printf("\nInitials: ");
    printf("%c", name[0]);
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0')
            printf(".%c", name[i + 1]);
    }
    printf(".\n");

    return 0;
}

