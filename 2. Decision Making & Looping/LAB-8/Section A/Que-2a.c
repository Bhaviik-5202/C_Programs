//  Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.// 
// Using While Loop. //
#include <stdio.h>  

int main() {  
    int i = 1;  
    while (i <= 10) {  
        if (i % 2 != 0) {  
            printf("%d\n", i);  
        }  
        i++;  
    }  
    return 0;  
}