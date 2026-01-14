// A1CreateFile.c
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt", "w");

    if (fp == NULL)
        printf("File not created");
    else
        printf("File created successfully");

    fclose(fp);
    return 0;
}
