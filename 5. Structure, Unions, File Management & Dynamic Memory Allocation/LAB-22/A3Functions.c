// A3Functions.c
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int n;

    fp = fopen("test.txt", "w");
    fprintf(fp, "Hello");
    fputc('A', fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    fscanf(fp, "%d", &n);
    ch = fgetc(fp);

    fseek(fp, 0, SEEK_SET);
    rewind(fp);

    fclose(fp);
    return 0;
}
