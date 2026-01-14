// A2Book.c
#include <stdio.h>

struct book
{
    char title[50];
    char author[50];
    char pub[50];
    float price;
};

int main()
{
    struct book b[3];
    int i;

    for (i = 0; i < 3; i++)
        scanf("%s %s %s %f", b[i].title, b[i].author, b[i].pub, &b[i].price);

    for (i = 0; i < 3; i++)
        printf("\n%s %s %s %.2f", b[i].title, b[i].author, b[i].pub, b[i].price);

    return 0;
}
