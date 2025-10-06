// Q82: Print each character of a string on a new line.
#include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    char str[100];
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin); 
    
    printf("\nCharacters on a new line:\n");
    while (str[i] != '\0') {
        if (str[i] != '\n') { 
		         printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}

