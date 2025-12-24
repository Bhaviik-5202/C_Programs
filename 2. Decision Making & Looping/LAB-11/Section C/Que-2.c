// Calculate without using power function and without multiplication. //

#include <stdio.h>
int main() {
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    
    for (int i = 0; i < exp; i++) {
        int temp = 0;
        for (int j = 0; j < base; j++) {
            temp++;
        }
        result += temp; // Add base exp times
    }
    
    printf("%d raised to the power of %d is: %d\n", base, exp, result);
    return 0;
}