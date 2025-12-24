// Check for equality of two numbers without using arithmetic or comparison operator. //

#include <stdio.h>  
int checkEquality(int a, int b) {  
    return a ^ b; // XOR of the two numbers  
}  

int main() {  
    int a = 5, b = 5;  

    switch(checkEquality(a, b)) {  
        case 0:  
            printf("Numbers are equal\n");  
            break;  
        default:  
            printf("Numbers are not equal\n");  
            break;  
    }  
    return 0;  
}