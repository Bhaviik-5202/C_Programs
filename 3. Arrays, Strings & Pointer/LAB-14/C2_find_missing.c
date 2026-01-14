#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter number of elements in sequence: ");
    scanf("%d", &n);

    int *a = malloc(sizeof(int) * n);
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

    int range = max - min + 1;
    int *present = calloc(range, sizeof(int));
    for (int i = 0; i < n; ++i)
        present[a[i] - min] = 1;

    printf("Missing numbers in the sequence (%d..%d):\n", min, max);

    int found = 0;
    for (int i = 0; i < range; ++i)
    {
        if (!present[i])
        {
            printf("%d ", min + i);
            found = 1;
        }
    }
    if (!found)
        printf("None");

    printf("\n");
    free(a);
    free(present);
    return 0;
}
