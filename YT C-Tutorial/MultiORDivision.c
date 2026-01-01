#include <stdio.h>
void main() {
    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    int multi = n << 1;
    int divid = n >> 1;

    printf("\nMultiplication Of N : %d", multi);
    printf("\nDivide Of N : %d", divid);
}