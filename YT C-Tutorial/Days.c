#include <stdio.h>
void main()
{
    int year, week, day;
    printf("Enter Days : ");
    scanf("%d", &day);

    year = day / 365;
    day %= 365;
    week = day / 7;
    day %= 7;

    printf("%d : %d : %d", year, week, day);
}