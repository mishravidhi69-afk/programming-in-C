//Q88: Replace spaces with hyphens in a string.
 #include <stdio.h>

int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            
            str[i] = '-';
        }
        i++;
    }

    printf("String with hyphens: %s", str); 
    
    return 0;
}
