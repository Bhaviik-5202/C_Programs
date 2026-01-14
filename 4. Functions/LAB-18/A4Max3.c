// A4Max3.c
#include <stdio.h>

float max3(float a, float b, float c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    printf("Max = %.2f", max3(x, y, z));
    return 0;
}
