// A2MaxMin.c
#include <stdio.h>

void maxmin(int a, int b)
{
    if (a > b)
        printf("Max=%d Min=%d", a, b);
    else
        printf("Max=%d Min=%d", b, a);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    maxmin(x, y);
    return 0;
}
