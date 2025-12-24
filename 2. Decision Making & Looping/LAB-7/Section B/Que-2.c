/* Read 3 numbers, multiply largest number from rst two numbers to third one using 
conditional. */

#include <stdio.h>  
#include <ctype.h>  

int main() {  
    char ch;  
    printf("Enter a character: ");  
    scanf("%c", &ch);  
    
    // Using the conditional operator  
    (isalpha(ch)) ? printf("%c is an alphabet.\n", ch) : printf("%c is not an alphabet.\n", ch);  
    
    return 0;  
}