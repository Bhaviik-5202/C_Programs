#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d\nOdd: %d\n", even, odd);
    return 0;
}
