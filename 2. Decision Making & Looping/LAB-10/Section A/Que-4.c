// Print digits of given number. //

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of the number: ");
    while (num > 0) {
        printf("%d ", num % 10); // Print last digit
        num /= 10; // Remove last digit
    }
    printf("\n");
    return 0;
}

