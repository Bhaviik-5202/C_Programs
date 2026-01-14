// C2Insert.c
#include <stdio.h>
int main()
{
    int a[50], n, i, val, pos;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter value: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++)
        if (val < a[i])
        {
            pos = i;
            break;
        }
    for (i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    n++;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
