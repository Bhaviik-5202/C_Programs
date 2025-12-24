// Find out sum of first and last digit of a given number. //

#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10; // Get last digit

    // Find first digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num; // Now num is the first digit

    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit: %d\n", sum);
    return 0;
}