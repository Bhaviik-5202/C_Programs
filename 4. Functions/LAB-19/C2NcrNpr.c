// C2NcrNpr.c
#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);

    printf("nCr = %d\n", fact(n) / (fact(r) * fact(n - r)));
    printf("nPr = %d", fact(n) / fact(n - r));

    return 0;
}
