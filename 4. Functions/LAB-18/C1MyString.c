// C1MyString.c
#include <stdio.h>

int length(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

int main()
{
    char s[50];
    gets(s);
    printf("Length = %d", length(s));
    return 0;
}
