// A4Student.c
#include <stdio.h>

struct student
{
    char name[50];
    float per;
    int age;
};

int main()
{
    struct student s[5];
    int i;

    for (i = 0; i < 5; i++)
        scanf("%s %f %d", s[i].name, &s[i].per, &s[i].age);

    for (i = 0; i < 5; i++)
        printf("\n%s %.2f %d", s[i].name, s[i].per, s[i].age);

    return 0;
}
