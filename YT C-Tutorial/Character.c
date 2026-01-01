#include <stdio.h>
void main() {
    
    char ch;
    printf("Enter Character :");
    scanf("%c", &ch);

    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
       printf("Character is Vowel. (%c)",ch);
    }
    else {
       printf("Character is Constant. (%c)",ch);
    }
    
}