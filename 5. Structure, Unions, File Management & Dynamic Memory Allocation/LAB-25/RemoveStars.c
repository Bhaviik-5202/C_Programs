// RemoveStars.c
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    char stack[200];
    int top = -1;
    int i;

    printf("Enter string: ");
    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != '*')
        {
            stack[++top] = s[i]; // push character
        }
        else
        {
            top--; // pop last character (closest non-star)
        }
    }

    stack[top + 1] = '\0';

    printf("Result = %s", stack);

    return 0;
}

// ab*c*d

/*
ab*c*d
remove b and *
a*c*d
remove a and *
c*d
remove c and *
d
*/

// Output :- 
// d