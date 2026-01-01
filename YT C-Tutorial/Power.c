#include <stdio.h>
#include <math.h>

int PowerNum(int b, int p);

int main() {

    int b, p;
    printf("Enter Base : ");
    scanf("%d", &b);

    printf("Enter Power : ");
    scanf("%d", &p);

    int power = PowerNum(b,p);

    printf("Square Number : %d \n", power);

    return 0;
}

int PowerNum(int b, int p) {
    return pow(b,p);
}