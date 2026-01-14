// B1StructPointer.c
#include <stdio.h>

struct student
{
    int roll;
    float marks;
};

int main()
{
    struct student s = {1, 90};
    struct student *p;

    p = &s;

    printf("Roll=%d Marks=%.2f", p->roll, p->marks);
    return 0;
}
