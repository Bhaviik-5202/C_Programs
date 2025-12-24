// Check whether the given number is perfect or not. //

#include <stdio.h>
int main() {
    int num, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i < num) {
        if (num % i == 0) {
            sum += i; // Add divisor
        }
        i++;
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}