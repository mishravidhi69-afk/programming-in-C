//Q83: Count vowels and consonants in a string.
#include <stdio.h>
int main() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    char str[100];
    int vowels = 0;
    int consonants = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        if (ch >= 'a' && ch <= 'z') { 
		            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}

