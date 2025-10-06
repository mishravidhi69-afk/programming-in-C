//Q-89: Count frequency of a given character in a string.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    char str[100];
    char target;
    int count = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &target);
    char lower_target = tolower(target);

    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == lower_target) {
            count++;
        }
    }

    printf("Frequency of '%c' in the string is: %d\n", target, count);
    
    return 0;
}

