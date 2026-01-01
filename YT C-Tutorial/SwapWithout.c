#include <stdio.h>
void main() {

    int a, b;
    printf("Enter Number A :");
    scanf("%d", &a);

    printf("Enter Number B :");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping Without Temp\n");
    printf("A : %d , B : %d", a, b);
    
}