// B2Nested.c
#include <stdio.h>

struct date
{
    int d, m, y;
};

struct student
{
    char name[50];
    struct date dob;
};

int main()
{
    struct student s;

    scanf("%s %d %d %d", s.name, &s.dob.d, &s.dob.m, &s.dob.y);

    printf("%s %d/%d/%d", s.name, s.dob.d, s.dob.m, s.dob.y);
    return 0;
}
