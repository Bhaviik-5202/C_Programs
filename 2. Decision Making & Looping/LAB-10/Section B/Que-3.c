// Check whether the given number is palindrome or not. //

#include <stdio.h>
int main() {
    int num, originalNum, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store original number

    while (num > 0) {
        reversed = reversed * 10 + (num % 10); // Build reversed number
        num /= 10; // Remove last digit
    }

    if (originalNum == reversed) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
    return 0;
}