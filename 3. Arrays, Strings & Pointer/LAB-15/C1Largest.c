// C1Largest.c
#include <stdio.h>
int main()
{
    int a[50], n, i, max1, max2;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max1 = max2 = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
            max2 = a[i];
    }
    printf("Largest = %d\nSecond Largest = %d", max1, max2);
    return 0;
}
