#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void *p, const void *q) { return (*(int *)p - *(int *)q); }

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int *a = malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmp_int);
    int dup_count = 0;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i - 1])
            dup_count++;
    }

    printf("Total duplicate elements (counting repeated occurrences): %d\n", dup_count);
    free(a);
    return 0;
}
