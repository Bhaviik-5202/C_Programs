// Print addition of 2 numbers. With Scan //

#include <stdio.h>  
int main() {  
    int a, b, sum;  
    printf("Enter two integers: ");  
    scanf("%d %d", &a, &b);  
    sum = a + b;  
    printf("Sum: %d\n", sum);  
    return 0;  
}