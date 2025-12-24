//  Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n //

#include <stdio.h>  
int main() {  
    int n = 36;  // Change n to the desired limit  
    int sum = 0;  
    int i = 1;  

    while (i * i <= n) {  
        sum += i * i;  // Add the square of i to sum  
        i++;           // Increment i  
    }  

    printf("Sum of the series = %d\n", sum);  
    return 0;  
}