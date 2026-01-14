// A1MallocFree.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ip;
    char *cp;
    float *fp;

    ip = (int *)malloc(sizeof(int));
    cp = (char *)malloc(sizeof(char));
    fp = (float *)malloc(sizeof(float));

    *ip = 10;
    *cp = 'A';
    *fp = 5.5;

    printf("Int = %d\n", *ip);
    printf("Char = %c\n", *cp);
    printf("Float = %.2f\n", *fp);

    free(ip);
    free(cp);
    free(fp);

    return 0;
}
