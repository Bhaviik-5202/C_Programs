/* Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s 
choice. */

#include <stdio.h>  
int main() { 
    
    int num1, num2;  
    char operator;  

    // User input  
    printf("Enter first number: ");  
    scanf("%d", &num1);  
    printf("Enter second number: ");  
    scanf("%d", &num2);  
    printf("Enter operator (+, -, *, /): ");  
    scanf(" %c", &operator);  

    switch (operator) {  
        case '+':  
            printf("%d + %d = %d\n", num1, num2, num1 + num2);  
            break;  
        case '-':  
            printf("%d - %d = %d\n", num1, num2, num1 - num2);  
            break;  
        case '*':  
            printf("%d * %d = %d\n", num1, num2, num1 * num2);  
            break;  
        case '/':  
            if (num2 != 0) {  
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);  
            } else {  
                printf("Division by zero is not allowed.\n");  
            }  
            break;  
        default:  
            printf("Invalid operator.\n");  
    }  

    return 0;  
}