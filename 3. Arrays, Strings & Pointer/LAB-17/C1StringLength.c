// C1StringLength.c
#include <stdio.h>

int main()
{
    char str[100];
    char *p;
    int len = 0;

    gets(str);
    p = str;

    while (*p != '\0')
    {
        len++;
        p++;
    }

    printf("Length = %d", len);

    return 0;
}
