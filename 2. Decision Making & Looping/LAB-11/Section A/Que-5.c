// Find factorial of the given number. //

#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Multiply to get factorial
    }
    
    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}