#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double a[n];
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%lf", &a[i]);
        sum += a[i];
    }

    double avg = sum / n;
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] > avg)
            count++;
    printf("Average: %.6g\nCount greater than average: %d\n", avg, count);
    return 0;
}
