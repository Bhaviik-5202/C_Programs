// Print numbers between two given numbers which is divisible by 2. //
#include <stdio.h>  

int main() {  
    int start, end;  
    printf("Enter two numbers (start and end): ");  
    scanf("%d %d", &start, &end);  

    // Ensure start is less than end  
    if (start > end) {  
        int temp = start;  
        start = end;  
        end = temp;  
    }  

    // Loop through the numbers  
    while (start <= end) {  
        if (start % 2 == 0) {  
            printf("%d\n", start);  
        }  
        start++;  
    }  

    return 0;  
}