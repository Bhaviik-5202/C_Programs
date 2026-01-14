// A5StringLen.c
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    printf("String = %s\n", str);
    printf("Length = %d", strlen(str));
    return 0;
}
