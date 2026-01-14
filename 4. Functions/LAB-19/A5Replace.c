// A5Replace.c
#include <stdio.h>

int main()
{
    char s[50], oldc, newc;
    int i;

    gets(s);
    scanf(" %c %c", &oldc, &newc);

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == oldc)
            s[i] = newc;

    printf("%s", s);
    return 0;
}
