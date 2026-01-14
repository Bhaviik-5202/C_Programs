// A2Count.c
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int c = 0, sp = 0, t = 0, nl = 0;

    fp = fopen("test.txt", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        c++;
        if (ch == ' ')
            sp++;
        else if (ch == '\t')
            t++;
        else if (ch == '\n')
            nl++;
    }

    printf("Chars=%d Spaces=%d Tabs=%d Lines=%d", c, sp, t, nl);
    fclose(fp);
    return 0;
}
