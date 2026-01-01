#include <stdio.h>
void main()
{

    int n;
    int flag;
    printf("Enter Number : ");
    scanf("%d", &n);

    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("Prime Number. %d", n);
    }
    else
    {
        printf("Non-Prime Number. %d", n);
    }
}