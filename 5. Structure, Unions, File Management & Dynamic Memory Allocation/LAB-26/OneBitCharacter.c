// OneBitCharacter.c
#include <stdio.h>

int main()
{
    int bits[100], n;
    int i = 0;

    printf("Enter number of bits: ");
    scanf("%d", &n);

    printf("Enter bits:\n");
    for (int j = 0; j < n; j++)
        scanf("%d", &bits[j]);

    while (i < n - 1)
    {
        if (bits[i] == 1)
            i = i + 2; // two-bit character
        else
            i = i + 1; // one-bit character
    }

    if (i == n - 1)
        printf("true");
    else
        printf("false");

    return 0;
}
