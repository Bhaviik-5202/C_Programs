// C3Remove.c
#include <stdio.h>
int main()
{
    int a[50], n, i, val, k = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter value to remove: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++)
        if (a[i] != val)
            a[k++] = a[i];
    printf("k = %d\n", k);
    for (i = 0; i < k; i++)
        printf("%d ", a[i]);
    return 0;
}
