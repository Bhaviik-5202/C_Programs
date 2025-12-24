// Convert given number in words. (i.e. n=3456 → output: Three Four Five Six) //

#include <stdio.h>
void printInWords(int num) {
    if (num == 0) return;
    printInWords(num / 10); // Recursive call
    switch (num % 10) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Number in words: ");
    printInWords(num);
    printf("\n");
    return 0;
}