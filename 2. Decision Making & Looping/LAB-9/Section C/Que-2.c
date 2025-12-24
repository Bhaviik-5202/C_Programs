// Convert decimal number to binary. (i.e. n=11 → output: 1101) //
#include <stdio.h>

int main() {
    int n, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        binary[i] = n % 2; // Store remainder
        n = n / 2; // Divide by 2
        i++;
    }
    
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]); // Print binary in reverse order
    }
    printf("\n");
    return 0;
}