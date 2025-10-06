//Q81: Count characters in a string without using built-in length functions.This program counts the length of a string by iterating through it until it finds the null character (\0), which marks the end of a string in C.
 #include <stdio.h>
int main() {
	printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin); 
    while (str[count] != '\0') {
        count++;
    }
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("The number of characters in the string is: %d\n", count);
    
    return 0;
}

 


