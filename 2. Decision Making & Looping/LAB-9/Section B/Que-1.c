// Print all uppercase and lowercase alphabets.//
#include <stdio.h>

int main() {
    char ch = 'A';
    printf("Uppercase Alphabets:\n");
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    
    ch = 'a'; // Reset for lowercase
    printf("\nLowercase Alphabets:\n");
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    return 0;
}