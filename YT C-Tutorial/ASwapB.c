#include <stdio.h>
void main() {
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);

    printf("Enter B : ");
    scanf("%d", &b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swapping Number :\n");
    printf("A : %d, B : %d", a, b);
}