#include <stdio.h>
int main()
{
    const int N = 5;
    double height, weight;
    int count = 0;

    for (int i = 0; i < N; ++i)
    {
        printf("Person %d - enter height(cm) and weight(kg): ", i + 1);
        if (scanf("%lf %lf", &height, &weight) != 2)
            return 0;
        if (height > 170.0 && weight < 50.0)
            count++;
    }
    printf("Number of persons with height>170 and weight<50: %d\n", count);
    return 0;
}
