// Input an integer number and check the last digit of number is even or odd //

#include <stdio.h>  
int main() {  
    int number;  
    printf("Enter an integer: ");  
    scanf("%d", &number);  
    
    int lastDigit = number % 10; // Get the last digit  
    
    if (lastDigit % 2 == 0) {  
        printf("The last digit %d is even.\n", lastDigit);  
    } else {  
        printf("The last digit %d is odd.\n", lastDigit);  
    }  

    return 0;  
}