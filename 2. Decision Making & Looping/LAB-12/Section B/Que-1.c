// To find the sum of the series \(1 + (1+2) + (1+2+3) + ... + (1+2+3+...+n)\): //

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int totalSum = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
        totalSum += sum;
    }
    
    printf("The total sum is: %d\n", totalSum);
    return 0;
}