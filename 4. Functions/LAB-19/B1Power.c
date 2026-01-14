// B1Power.c
#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Power = %d", power(x, y));
    return 0;
}
