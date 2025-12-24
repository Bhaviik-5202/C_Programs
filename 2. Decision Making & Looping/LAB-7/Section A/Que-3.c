/* Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s 
choice using switch. */

#include <stdio.h>  
int main() {  
    int a, b;  
    char operator;  

    printf("Enter two numbers: ");  
    scanf("%d %d", &a, &b);  
    
    printf("Enter an operator (+, -, *, /): ");  
    scanf(" %c", &operator);  

    switch (operator) {  
        case '+':  
            printf("%d + %d = %d\n", a, b, a + b);  
            break;  
        case '-':  
            printf("%d - %d = %d\n", a, b, a - b);  
            break;  
        case '*':  
            printf("%d * %d = %d\n", a, b, a * b);  
            break;  
        case '/':  
            if (b != 0) {  
                printf("%d / %d = %d\n", a, b, a / b);  
            } else {  
                printf("Error! Division by zero.\n");  
            }  
            break;  
        default:  
            printf("Invalid operator!\n");  
    }  

    return 0;  
}