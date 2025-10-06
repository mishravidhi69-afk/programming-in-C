//Q15.Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    char ch;

    printf("--- Character Categorizer ---\n");
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nResult: The character '%c' is a ", ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("UPPERCASE ALPHABET.\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("LOWERCASE ALPHABET.\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("DIGIT.\n");
    } 
    else {
        printf("SPECIAL CHARACTER.\n");
    }
    return 0;
}
