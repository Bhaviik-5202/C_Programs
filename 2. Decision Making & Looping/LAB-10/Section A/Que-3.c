// Find whether the given number is prime or not.** //

#include <stdio.h>
int main() {
    int num, i, isPrime = 1; // Assume number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        i = 2;
        while (i * i <= num) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}