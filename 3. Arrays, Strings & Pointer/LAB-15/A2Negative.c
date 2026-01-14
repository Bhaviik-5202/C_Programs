// A2Negative.c

#include <stdio.h>

int main()
{
    int arr[50], n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            count++;
    }

    printf("Total number of negative elements = %d", count);

    return 0;
}
