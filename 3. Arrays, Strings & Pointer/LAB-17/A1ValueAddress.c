// A1ValueAddress.c
#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u", p);

    return 0;
}
