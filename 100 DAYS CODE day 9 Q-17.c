//Q17. Check Vowel or Consonant.Write a program to input a character and check whether it is a vowel or a consonant using conditional statements.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    char ch;

    printf("--- Vowel or Consonant Checker ---\n");
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
        printf("\nResult: '%c' is NOT an alphabet.\n", ch);
        return 0;
    }
    char upper_ch = toupper(ch)
    if (upper_ch == 'A' || upper_ch == 'E' || upper_ch == 'I' || upper_ch == 'O' || upper_ch == 'U'); {
        printf("\nResult: '%c' is a VOWEL.\n", ch);
    } else {
        printf("\nResult: '%c' is a CONSONANT.\n", ch);
    }

    return 0;
}
