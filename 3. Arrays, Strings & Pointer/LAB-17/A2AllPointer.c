// A2AllPointer.c
#include <stdio.h>

int main()
{
    int a = 10;
    float b = 5.5;
    double c = 12.34;
    char d = 'A';

    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;
    char *p4 = &d;

    printf("Int = %d\n", *p1);
    printf("Float = %.2f\n", *p2);
    printf("Double = %.2lf\n", *p3);
    printf("Char = %c", *p4);

    return 0;
}
