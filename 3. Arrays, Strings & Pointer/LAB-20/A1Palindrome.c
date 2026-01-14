// A1Palindrome.c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, j, len;

    gets(str);
    len = strlen(str);

    for (i = len - 1, j = 0; i >= 0; i--, j++)
        rev[j] = str[i];
    rev[j] = '\0';

    if (strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
