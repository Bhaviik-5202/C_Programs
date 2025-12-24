// Check whether given number is positive or negative.//

#include <stdio.h>  
int main() {  
    float number;  

    printf("Enter a number: ");  
    scanf("%f", &number);  

    if (number > 0) {  
        printf("The number is positive.\n");  
    } else if (number < 0) {  
        printf("The number is negative.\n");  
    } else {  
        printf("The number is neither positive nor negative (it is zero).\n");  
    }  

    return 0;  
}