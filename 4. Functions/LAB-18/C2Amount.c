// C2Amount.c
#include <stdio.h>

void print(int n)
{
    char *one[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *ten[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (n >= 1000)
    {
        printf("%s Thousand ", one[n / 1000]);
        n %= 1000;
    }
    if (n >= 100)
    {
        printf("%s Hundred ", one[n / 100]);
        n %= 100;
    }
    if (n >= 20)
    {
        printf("%s ", tens[n / 10]);
        n %= 10;
    }
    else if (n >= 10)
    {
        printf("%s ", ten[n - 10]);
        n = 0;
    }
    if (n > 0)
        printf("%s", one[n]);
}

int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
