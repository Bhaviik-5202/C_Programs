// A3SumPointer.c
#include <stdio.h>

int main()
{
    int a, b, sum;
    int *p1, *p2;

    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    printf("Sum = %d", sum);

    return 0;
}
