//Q10.Write a program to input time in seconds and convert it to hours, minutes, and seconds.
#include <stdio.h>
    void convert_seconds() {
    printf("Name - Vidhi Mishra \nSAP ID - 590028001 \nCourse - BCA \nBatch-B5");
    printf("\n----------------------------------------------------------------\n");
    int total_seconds, hours, minutes, seconds;
    printf("--- Seconds Converter (to HH:MM:SS) ---\n");
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;

    seconds = remaining_seconds % 60;
    printf("\n--- Converted Time ---\n");
    printf("%d seconds is equivalent to: %02d:%02d:%02d (HH:MM:SS)\n", 
           total_seconds, hours, minutes, seconds);
}

int main() {
    convert_seconds();
    return 0;
}
