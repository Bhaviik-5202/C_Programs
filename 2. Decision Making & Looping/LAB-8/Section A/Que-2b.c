//  Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.//
// Using Do While Loop. //
#include <stdio.h>  

int main() {  
    int i = 1;  
    do {  
        if (i % 2 != 0) {  
            printf("%d\n", i);  
        }  
        i++;  
    } while (i <= 10);  
    return 0;  
}