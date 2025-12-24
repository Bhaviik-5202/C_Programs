/* Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000
seconds = 02:46:40)]
*/

#include <stdio.h>  
int main() {  
    int totalSeconds, hours, minutes, seconds;  

    // Input the time in seconds  
    printf("Enter time in seconds: ");  
    scanf("%d", &totalSeconds);  

    // Convert seconds into hours, minutes, and seconds  
    hours = totalSeconds / 3600;  
    totalSeconds %= 3600;  
    minutes = totalSeconds / 60;  
    seconds = totalSeconds % 60;  

    // Print the result in HH:MM:SS format  
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);  

    return 0;  
} 