// A3StringFun.c
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50];

    gets(s1);
    gets(s2);

    printf("Length = %d\n", strlen(s1));
    printf("Compare = %d\n", strcmp(s1, s2));

    strcpy(s2, s1);
    printf("Copy = %s\n", s2);

    strcat(s2, s1);
    printf("Concat = %s\n", s2);

    printf("Reverse = %s\n", strrev(s1));
    printf("Lower = %s\n", strlwr(s1));
    printf("Upper = %s\n", strupr(s1));

    return 0;
}
