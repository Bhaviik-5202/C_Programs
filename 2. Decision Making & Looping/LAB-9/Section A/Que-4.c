// Find factorial of the given number. s//
#include <stdio.h>

int main() {
    int n, factorial = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (i <= n) {
        factorial *= i; // Multiply to get factorial
        i++;
    }
    
    printf("Factorial of %d = %d\n", n, factorial);
    return 0;
}