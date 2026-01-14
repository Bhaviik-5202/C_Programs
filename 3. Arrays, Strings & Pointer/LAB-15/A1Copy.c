// A1Copy.c

#include <stdio.h>

int main()
{
    int arr1[50], arr2[50];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Copied Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
