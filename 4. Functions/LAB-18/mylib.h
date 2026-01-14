// mylib.h
#include <stdio.h>

void prime(int n)
{
    int i, flag = 1;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            flag = 0;
    if (flag)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}

void armstrong(int n)
{
    int t = n, s = 0, d;
    while (n > 0)
    {
        d = n % 10;
        s += d * d * d;
        n /= 10;
    }
    if (t == s)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}

void perfect(int n)
{
    int i, s = 0;
    for (i = 1; i < n; i++)
        if (n % i == 0)
            s += i;
    if (s == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}
