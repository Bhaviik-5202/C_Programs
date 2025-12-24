// Calculate power without using power function. //

#include <stdio.h>

int main() {
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    
    for (int i = 0; i < exp; i++) {
        result *= base; // Multiply base exp times
    }
    
    printf("%d raised to the power of %d is: %d\n", base, exp, result);
    return 0;
}