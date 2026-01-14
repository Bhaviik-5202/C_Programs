#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    double a[n];
    for (int i = 0; i < n; ++i) scanf("%lf", &a[i]);
    double sum = 0; double max = a[0], min = a[0];
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    double avg = sum / n;
    printf("Max: %.6g\nMin: %.6g\nSum: %.6g\nAvg: %.6g\n", max, min, sum, avg);
    return 0;
}
