#include <stdio.h>
void main()
{
    float principal, rate, time, si;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", si);
}