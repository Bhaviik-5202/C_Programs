// Print sum of 1 to n numbers. //
#include <stdio.h>  

int main() {  
    int n, sum = 0, i = 1;  

    printf("Enter a positive integer: ");  
    scanf("%d", &n);  

    while (i <= n) {  
        sum += i; // Add i to sum  
        i++;      // Increment i  
    }  

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);  
    return 0;  
}