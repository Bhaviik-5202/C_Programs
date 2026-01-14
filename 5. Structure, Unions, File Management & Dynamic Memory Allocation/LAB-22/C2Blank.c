// C2Blank.c
#include <stdio.h>

int main()
{
    FILE *fp, *temp;
    char line[200];
    int count = 0;

    fp = fopen("test.txt", "r");
    temp = fopen("temp.txt", "w");

    while (fgets(line, 200, fp))
    {
        if (line[0] != '\n')
        {
            count++;
            fputs(line, temp);
            if (count == 3)
                fputs("\n", temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("test.txt");
    rename("temp.txt", "test.txt");
    return 0;
}
