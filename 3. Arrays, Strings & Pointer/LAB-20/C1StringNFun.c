// C1StringNFun.c
#include <stdio.h>

int mystrncmp(char *a, char *b, int n)
{
    while (n-- && *a && *b)
    {
        if (*a != *b)
            return *a - *b;
        a++;
        b++;
    }
    return 0;
}

void mystrncpy(char *d, char *s, int n)
{
    while (n-- && *s)
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
}

void mystrncat(char *d, char *s, int n)
{
    while (*d != '\0')
        d++;

    while (n-- && *s)
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
}

int main()
{
    char s1[50], s2[50];
    int n;

    gets(s1);
    gets(s2);
    scanf("%d", &n);

    printf("Compare = %d\n", mystrncmp(s1, s2, n));

    mystrncpy(s2, s1, n);
    printf("Copy = %s\n", s2);

    mystrncat(s2, s1, n);
    printf("Concat = %s", s2);

    return 0;
}
