// Find out largest number from given 3 numbers using conditional operator. //  

#include <stdio.h>  
int main() {  
    int a, b, c, largest;  

    // Input three numbers  
    printf("Enter three numbers: ");  
    scanf("%d %d %d", &a, &b, &c);  

    // Using ternary operator to find the largest number  
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);  

    printf("The largest number is: %d\n", largest);  

    return 0;  
}