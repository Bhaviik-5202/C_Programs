// A5Swap.c
#include <stdio.h>

void swapValue(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("Call by Value: a=%d b=%d\n", a, b);
}

void swapRef(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    swapValue(x, y);
    swapRef(&x, &y);

    printf("Call by Reference: a=%d b=%d", x, y);
    return 0;
}
