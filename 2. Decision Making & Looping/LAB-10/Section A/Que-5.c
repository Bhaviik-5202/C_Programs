// Print given number in reverse order. //

#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        reversed = reversed * 10 + (num % 10); // Build reversed number
        num /= 10; // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}
