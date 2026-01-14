#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int pos = 0, neg = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
    }
    
    printf("Positive: %d\nNegative: %d\n", pos, neg);
    return 0;
}
