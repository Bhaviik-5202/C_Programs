// B2Reverse.c
#include <stdio.h>
int main()
{
    int a[50], n, i, t;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
