// B2Capitalize.c
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch, prev = ' ';

    fp = fopen("test.txt", "r+");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (prev == ' ' && islower(ch))
        {
            fseek(fp, -1, SEEK_CUR);
            fputc(toupper(ch), fp);
        }
        prev = ch;
    }
    fclose(fp);
    return 0;
}
