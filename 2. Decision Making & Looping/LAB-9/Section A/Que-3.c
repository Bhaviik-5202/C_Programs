// Calculate ( x^n ) without using power function. //
#include <stdio.h>

int main() {
    int x, n, result = 1, i = 0;
    printf("Enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);
    
    while (i < n) {
        result *= x; // Multiply x, n times
        i++;
    }
    
    printf("%d^%d = %d\n", x, n, result);
    return 0;
}