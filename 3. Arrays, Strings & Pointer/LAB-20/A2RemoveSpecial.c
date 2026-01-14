// A2RemoveSpecial.c
#include <stdio.h>

int main()
{
    char str[100], result[100];
    char *p;
    int i = 0;

    gets(str);
    p = str;

    while (*p != '\0')
    {
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z') || (*p >= '0' && *p <= '9'))
        {
            result[i++] = *p;
        }
        p++;
    }
    result[i] = '\0';

    printf("%s", result);
    return 0;
}
