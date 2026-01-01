#include <stdio.h>
void main() {
    int n;
    int factorial = 1;
    printf("Enter Number :");
    scanf("%d", &n);

    if ( n < 0) {
        printf("Not Defined Factorial.");
    }    
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial Of N : %d", factorial);
    }

}