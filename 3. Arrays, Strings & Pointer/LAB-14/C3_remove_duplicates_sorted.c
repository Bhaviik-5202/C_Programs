#include <stdio.h>

int main()
{
    int n;
    printf("Enter n (size of sorted array): ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    int k = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            a[k++] = a[i];
        }
    }

    printf("Number of unique elements k = %d\n", k);

    printf("Array after removing duplicates (first k elements):\n");
    for (int i = 0; i < k; ++i)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
