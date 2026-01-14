// B2Upper.c
#include <stdio.h>

void convert(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
}

int main()
{
    char s[50];
    gets(s);
    convert(s);
    printf("%s", s);
    return 0;
}
