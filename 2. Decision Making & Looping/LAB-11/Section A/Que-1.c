// Print 1 to 10 then modify program to print 1 to n. //

#include <stdio.h>
int main() {
    int n;
    printf("Print numbers from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    
    printf("\nEnter a number n to print from 1 to n: ");
    scanf("%d", &n);
    
    printf("Print numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    return 0;
}