// A4StructDMA.c
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    float marks;
};

int main()
{
    struct student *s;

    s = (struct student *)malloc(sizeof(struct student));

    scanf("%d %f", &s->roll, &s->marks);

    printf("Roll = %d\nMarks = %.2f", s->roll, s->marks);

    free(s);
    return 0;
}
