// A1StudentFile.c
#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int backlog;
};

int main()
{
    struct student s;
    FILE *fp;
    int i, n;

    fp = fopen("student.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d", &s.roll, s.name, &s.backlog);
        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlog);
    }
    fclose(fp);

    fp = fopen("student.txt", "r");
    printf("\nStudents having more than 5 backlogs:\n");

    while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlog) != EOF)
        if (s.backlog > 5)
            printf("Roll = %d\n", s.roll);

    fclose(fp);
    return 0;
}
