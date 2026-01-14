// B3Merge.c
#include <stdio.h>

int main()
{
    FILE *f1, *f2, *f3;
    char line1[100], line2[100];

    f1 = fopen("a.txt", "r");
    f2 = fopen("b.txt", "r");
    f3 = fopen("c.txt", "w");

    while (fgets(line1, 100, f1) || fgets(line2, 100, f2))
    {
        if (!feof(f1))
            fputs(line1, f3);
        if (!feof(f2))
            fputs(line2, f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}
