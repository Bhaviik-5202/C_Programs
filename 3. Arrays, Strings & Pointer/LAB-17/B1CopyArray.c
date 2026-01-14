// B1CopyArray.c
#include <stdio.h>

int main()
{
    int a[50], b[50], n, i;
    int *p1, *p2;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p1 = a;
    p2 = b;

    for (i = 0; i < n; i++)
        *(p2 + i) = *(p1 + i);

    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
