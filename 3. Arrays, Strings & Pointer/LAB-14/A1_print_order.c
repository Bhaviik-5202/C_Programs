#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Normal order:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }

    printf("\nReverse order:\n");
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
