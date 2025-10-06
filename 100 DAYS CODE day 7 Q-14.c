//Q14.Write a program to input a character and check whether it is an alphabet or not using if-else.
#include <stdio.h>

int main() {
    char ch;

    printf("--- Alphabet Checker ---\n");
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("\nResult: '%c' is an ALPHABET.\n", ch);
    } else {
        printf("\nResult: '%c' is NOT an alphabet.\n", ch);
    }
    return 0;
}


    
