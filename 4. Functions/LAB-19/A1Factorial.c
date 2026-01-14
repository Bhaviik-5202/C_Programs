// A1Factorial.c
#include <stdio.h>

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int recFact(int n)
{
    if (n == 0)
        return 1;
    return n * recFact(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));
    printf("Recursive Factorial = %d", recFact(n));

    return 0;
}
