// Check whether the given number is odd or even without using % operator//

#include <stdio.h>  
int main() {  
    int number;  
    printf("Enter an integer: ");  
    scanf("%d", &number);  
    
    if (number & 1) { // Using bitwise AND to check if the number is odd  
        printf("%d is odd.\n", number);  
    } else {  
        printf("%d is even.\n", number);  
    }  
    
    return 0;  
}