// A3SI.c
#include <stdio.h>

float si(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    printf("Simple Interest = %.2f", si(p, r, t));
    return 0;
}
