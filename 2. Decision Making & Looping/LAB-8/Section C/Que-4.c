/*
Take two numbers input from user and perform a multiplication without using a * 
operator.
*/

#include <stdio.h>  
int multiply(int x, int y) {  
    int result = 0;  
    while (y != 0) {  
        result += x; // Add x for each iteration of y  
        y--;         // Decrease y until it becomes 0  
    }  
    return result;  
}  

int main() {  
    int num1, num2;  
    
    // Take inputs from the user  
    printf("Enter first number: ");  
    scanf("%d", &num1);  
    printf("Enter second number: ");  
    scanf("%d", &num2);  

    int result = multiply(num1, num2);  
    printf("Result of multiplication: %d\n", result);  

    return 0;  
}