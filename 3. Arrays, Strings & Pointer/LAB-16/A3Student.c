// A3Student.c
#include <stdio.h>

int main()
{
    int s[20][2], i;

    for (i = 0; i < 20; i++)
    {
        printf("Enter Roll No and Marks: ");
        scanf("%d %d", &s[i][0], &s[i][1]);
    }

    printf("Roll No  Marks\n");
    for (i = 0; i < 20; i++)
        printf("%d   %d\n", s[i][0], s[i][1]);

    return 0;
}
