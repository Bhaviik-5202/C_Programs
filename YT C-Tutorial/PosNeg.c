#include <stdio.h>
void main() {
    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    if( n < 0) {
        printf("Number is Negitive.", n);
    }
    else if ( n > 0){
        printf("Number is Positive.", n);
    }
    else {
        printf("Number is Zero.", n);
    }

}