// . Print number and its square root for 0 to 9. //
#include <stdio.h>  
#include <math.h>  

int main() {  
    int i = 0;  
    
    while (i <= 9) {  
        printf("Number: %d, Square Root: %.6f\n", i, sqrt(i));  
        i++;  
    }  
    
    return 0;  
}