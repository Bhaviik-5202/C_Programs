// Print given feet into inches. (inches = feet*12)//

#include <stdio.h>  
int main() {  
    int feet;  
    printf("Enter the length in feet: ");  
    scanf("%d", &feet);  
    
    int inches = feet * 12; // conversion from feet to inches  
    printf("%d feet is equal to %d inches.\n", feet, inches);  
    
    return 0;  
}