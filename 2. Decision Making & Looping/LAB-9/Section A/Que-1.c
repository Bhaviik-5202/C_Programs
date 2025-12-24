 //Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 ... n. //

#include <stdio.h>
int main() {
    int n, sum = 0, i = 1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    
    while (i <= n) {
        if (i % 2 == 0) {
            sum -= i; // Subtract even numbers
        } else {
            sum += i; // Add odd numbers
        }
        i++;
    }
    
    printf("Sum of series: %d\n", sum);
    return 0;
}