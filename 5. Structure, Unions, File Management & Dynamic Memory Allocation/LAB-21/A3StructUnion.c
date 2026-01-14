// A3StructUnion.c
#include <stdio.h>

struct demo1
{
    int a;
    float b;
};

union demo2
{
    int a;
    float b;
};

int main()
{
    printf("Size of Structure = %d\n", sizeof(struct demo1));
    printf("Size of Union = %d", sizeof(union demo2));
    return 0;
}
