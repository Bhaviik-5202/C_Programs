// A5ArrayPointer.c
#include <stdio.h>

int main()
{
    int a[50], n, i;
    int *p;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}
