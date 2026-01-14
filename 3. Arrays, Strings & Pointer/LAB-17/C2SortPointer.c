// C2SortPointer.c
#include <stdio.h>

int main()
{
    int a[50], n, i, j, t;
    int *p;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (*(p + i) > *(p + j))
            {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
