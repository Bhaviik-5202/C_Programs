/* Evaluate expressions using operator precedence */

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;

    a = 10 + 20 * 30;
    b = 100 / 10 * 100;
    c = 5 * 4 / 4 % 3;
    d = 100 + 200 / 10 - 3 * 10;
    e = (10 - 4) + (20 / (2 * 5)) * 3;
    f = (3 + 8) % 35 - 28 / 7;

    printf("a) %d\n", a);
    printf("b) %d\n", b);
    printf("c) %d\n", c);
    printf("d) %d\n", d);
    printf("e) %d\n", e);
    printf("f) %d\n", f);

    return 0;
}
