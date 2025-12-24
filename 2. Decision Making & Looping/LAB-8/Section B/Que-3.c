// Print rst 50 numbers in series 1, 4, 7, 10…  //
#include <stdio.h>  

int main() {  
    int i = 1; // Starting value  
    int count = 0; // To count the numbers printed  
    while (count < 50) {  
        printf("%d ", i);  
        i += 3; // Increment by 3 for the next number  
        count++; // Increase the count  
    }  
    return 0;  
}