// B1Modify.c
#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int backlog;
};

int main()
{
    struct student s[50];
    FILE *fp;
    int i, n, rollno;

    fp = fopen("student.txt", "r");
    i = 0;
    while (fscanf(fp, "%d %s %d", &s[i].roll, s[i].name, &s[i].backlog) != EOF)
        i++;
    n = i;
    fclose(fp);

    printf("Enter roll number to modify: ");
    scanf("%d", &rollno);

    for (i = 0; i < n; i++)
        if (s[i].roll == rollno)
            s[i].backlog = 3;

    fp = fopen("student.txt", "w");
    for (i = 0; i < n; i++)
        fprintf(fp, "%d %s %d\n", s[i].roll, s[i].name, s[i].backlog);
    fclose(fp);

    fp = fopen("student.txt", "r");
    while (fscanf(fp, "%d %s %d", &s[i].roll, s[i].name, &s[i].backlog) != EOF)
        printf("%d %s %d\n", s[i].roll, s[i].name, s[i].backlog);

    fclose(fp);
    return 0;
}
