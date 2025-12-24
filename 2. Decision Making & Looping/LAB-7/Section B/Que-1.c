/* Read 3 numbers, multiply largest number from rst two numbers to third one using 
conditional. */
#include <stdio.h>  
int main() {  
    int num1, num2, num3, largest;  
    
    // Input three numbers  
    printf("Enter three numbers: ");  
    scanf("%d %d %d", &num1, &num2, &num3);  
    
    // Determine the largest number among the first two  
    if (num1 > num2) {  
        largest = num1;  
    } else {  
        largest = num2;  
    }  

    // Multiply the largest of the first two with the third number  
    int result = largest * num3;  

    // Output the result  
    printf("The result is: %d\n", result);  

    return 0;  
}
