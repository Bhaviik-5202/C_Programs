// B3SwapArray.c
#include <stdio.h>

void swap(int a[], int b[], int n)
{
    int i, t;
    for (i = 0; i < n; i++)
    {
        t = a[i];
        a[i] = b[i];
        b[i] = t;
    }
}

int main()
{
    int a[50], b[50], n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    swap(a, b, n);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
