/*
Take two numbers input from user and perform a division operation and nd out quotient 
and reminder (without using / and % operator) also note that a smaller number should 
divide a bigger number. 
*/

#include <stdio.h>  
int main() {  
    int dividend, divisor;  
    int quotient = 0, remainder;  
    
    // Take input from the user  
    printf("Enter dividend (larger number): ");  
    scanf("%d", &dividend);  
    printf("Enter divisor (smaller number): ");  
    scanf("%d", &divisor);  

    // Ensure dividend is greater than divisor  
    if (dividend < divisor) {  
        printf("Dividend should be larger than divisor.\n");  
        return 1;  
    }  

    remainder = dividend;  

    // Perform repeated subtraction  
    while (remainder >= divisor) {  
        remainder -= divisor;  
        quotient++;  
    }  

    // Output results  
    printf("Quotient: %d\n", quotient);  
    printf("Remainder: %d\n", remainder);  

    return 0;  
}