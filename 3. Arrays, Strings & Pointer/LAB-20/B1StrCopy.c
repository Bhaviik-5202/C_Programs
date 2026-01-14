// B1StrCopy.c
#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    char *p1, *p2;

    gets(s1);
    p1 = s1;
    p2 = s2;

    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';

    printf("Copied string: %s", s2);
    return 0;
}
