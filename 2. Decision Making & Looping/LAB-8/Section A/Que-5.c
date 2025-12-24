//  Get 10 numbers from user print count of odd, even numbers. //

#include <stdio.h>  
int main() {  
    int n, evenCount = 0, oddCount = 0, count = 0;  

    while (count < 10) {  
        printf("Enter an integer: ");  
        scanf("%d", &n);  
        
        if (n % 2 == 0) {  
            evenCount++;  
        } else {  
            oddCount++;  
        }  
        count++;  
    }  

    printf("Total even numbers: %d\n", evenCount);  
    printf("Total odd numbers: %d\n", oddCount);  

    return 0;  
}