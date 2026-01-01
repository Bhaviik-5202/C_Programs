#include <stdio.h>
void main() {
    int a, b, c;
    printf("Enter Number A :");
    scanf("%d", &a);
    printf("Enter Number B :");
    scanf("%d", &b);
    printf("Enter Number C :");
    scanf("%d", &c);

    if ( a > b && a > c) {
        printf("A is Largect %d.", a);
    }
    else if ( b > a && b > c) {
        printf("B is Largect %d.", b);
    }
    else {
        printf("C is Largect %d.", c); 
    }

}