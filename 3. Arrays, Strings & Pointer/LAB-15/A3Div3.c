// A3Div3.c
#include <stdio.h>
int main() {
    int a[50], n, i, c = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        if (a[i] % 3 == 0)
            c++;
    printf("Count = %d", c);
    return 0;
}
