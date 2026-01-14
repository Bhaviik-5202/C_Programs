// A4FindChar.c
#include <stdio.h>

int main()
{
    char s[50], ch;
    int i, found = 0;

    gets(s);
    scanf("%c", &ch);

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ch)
            found = 1;

    if (found)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
