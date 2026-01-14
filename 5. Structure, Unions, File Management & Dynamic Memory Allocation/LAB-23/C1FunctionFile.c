// C1FunctionFile.c
#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int backlog;
};

void store()
{
    struct student s;
    FILE *fp;
    int n, i;

    fp = fopen("student.txt", "w");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d", &s.roll, s.name, &s.backlog);
        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlog);
    }
    fclose(fp);
}

void display()
{
    struct student s;
    FILE *fp;

    fp = fopen("student.txt", "r");
    while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlog) != EOF)
        printf("%d %s %d\n", s.roll, s.name, s.backlog);
    fclose(fp);
}

int main()
{
    store();
    display();
    return 0;
}
