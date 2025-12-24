// Check whether number is even number or odd number using conditional operator. // 

#include <stdio.h>  
int main() {  
    int n;  
    printf("Enter a number: ");  
    scanf("%d", &n);  
    
    // Using the conditional operator  
    (n % 2 == 0) ? printf("Even\n") : printf("Odd\n");  

    return 0;  
}