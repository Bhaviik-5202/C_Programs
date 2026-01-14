// A4SwapPointer.c
#include <stdio.h>

int main()
{
    int a, b, t;
    int *p1, *p2;

    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    t = *p1;
    *p1 = *p2;
    *p2 = t;

    printf("a = %d b = %d", a, b);

    return 0;
}
