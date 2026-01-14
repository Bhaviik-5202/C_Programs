// B1Fibonacci.c
#include <stdio.h>

void bbo(int n)
{
    int a = 0, b = 1, c, i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    bbo(n);
    return 0;
}
