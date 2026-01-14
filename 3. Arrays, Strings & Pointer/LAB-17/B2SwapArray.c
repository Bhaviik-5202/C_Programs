// B2SwapArray.c
#include <stdio.h>

int main()
{
    int a[50], b[50], n, i, t;
    int *p1, *p2;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    p1 = a;
    p2 = b;

    for (i = 0; i < n; i++)
    {
        t = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = t;
    }

    printf("Array A:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nArray B:\n");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
