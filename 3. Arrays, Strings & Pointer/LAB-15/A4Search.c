// A4Search.c
#include <stdio.h>
int main()
{
    int a[50], n, i, key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key)
            found = 1;
    if (found)
        printf("Element Found");
    else
        printf("Not Found");
    return 0;
}
