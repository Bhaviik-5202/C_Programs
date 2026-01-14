// B2StringFun.c
#include <stdio.h>

int mystrlen(char *s)
{
    int c = 0;
    while (*s != '\0')
    {
        c++;
        s++;
    }
    return c;
}

void mystrcpy(char *d, char *s)
{
    while (*s != '\0')
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
}

int mystrcmp(char *a, char *b)
{
    while (*a != '\0' && *b != '\0')
    {
        if (*a != *b)
            return *a - *b;
        a++;
        b++;
    }
    return *a - *b;
}

int main()
{
    char s1[50], s2[50];

    gets(s1);
    gets(s2);

    printf("Length = %d\n", mystrlen(s1));

    mystrcpy(s2, s1);
    printf("Copied = %s\n", s2);

    printf("Compare = %d", mystrcmp(s1, s2));

    return 0;
}
