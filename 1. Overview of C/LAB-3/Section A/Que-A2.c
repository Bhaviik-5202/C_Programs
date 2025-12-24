/* Calculate age from current date to user’s birth date */

#include <stdio.h>
int main()
{
    int cd, cm, cy, bd, bm, by;
    int age;

    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &cd, &cm, &cy);

    printf("Enter birth date (dd mm yyyy): ");
    scanf("%d %d %d", &bd, &bm, &by);

    age = cy - by;

    if(cm < bm || (cm == bm && cd < bd))
        age = age - 1;

    printf("Age = %d years", age);

    return 0;
}
