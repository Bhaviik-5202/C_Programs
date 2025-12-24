/* Print all integer greater than 100 and less than 200 that are divisible by 7 but not 
divisible by 5. */
#include <stdio.h>  

int main() {  
    int num = 101; // Start checking from 101  

    while (num < 200) {  
        if (num % 7 == 0 && num % 5 != 0) {  
            printf("%d\n", num); // Print the number  
        }  
        num++; // Increment the number  
    }  

    return 0;  
}