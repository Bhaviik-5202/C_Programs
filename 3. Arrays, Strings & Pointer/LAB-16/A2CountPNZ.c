// A2CountPNZ.c
#include <stdio.h>

int main()
{
    int a[3][3], i, j, p = 0, n = 0, z = 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > 0)
                p++;
            else if (a[i][j] < 0)
                n++;
            else
                z++;
        }

    printf("Positive = %d\nNegative = %d\nZero = %d", p, n, z);
    return 0;
}
