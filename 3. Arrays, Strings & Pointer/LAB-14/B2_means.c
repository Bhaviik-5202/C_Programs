#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double a[n];
    for (int i = 0; i < n; ++i)
        scanf("%lf", &a[i]);

    double sum = 0, sum_log = 0, sum_inv = 0;
    int all_positive = 1, has_zero = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        if (a[i] <= 0)
            all_positive = 0;
        if (a[i] == 0)
            has_zero = 1;
        if (a[i] > 0)
            sum_log += log(a[i]);
        if (a[i] != 0)
            sum_inv += 1.0 / a[i];
    }

    double am = sum / n;
    printf("Arithmetic mean: %.6g\n", am);
    if (all_positive)
    {
        double gm = exp(sum_log / n);
        printf("Geometric mean: %.6g\n", gm);
    }
    else
    {
        printf("Geometric mean: undefined (non-positive elements present)\n");
    }

    if (!has_zero)
    {
        double hm = n / sum_inv;
        printf("Harmonic mean: %.6g\n", hm);
    }
    else
    {
        printf("Harmonic mean: undefined (zero element present)\n");
    }
    return 0;
}
